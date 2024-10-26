#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

const int ALPHABET_SIZE = 26;
const int INF = 1e9;

struct TrieNode
{
  TrieNode *children[ALPHABET_SIZE];
  int min_len_S; // minimal len_S among strings that reach this node
  TrieNode()
  {
    min_len_S = INF;
    for (int i = 0; i < ALPHABET_SIZE; i++)
    {
      children[i] = nullptr;
    }
  }
};

void insert(TrieNode *root, const string &s, int len_S)
{
  TrieNode *node = root;
  for (int i = 0; i < s.length(); i++)
  {
    int idx = s[i] - 'a';
    if (node->children[idx] == nullptr)
    {
      node->children[idx] = new TrieNode();
    }
    node = node->children[idx];
    if (node->min_len_S > len_S)
    {
      node->min_len_S = len_S;
    }
  }
}

int main()
{
  int N;
  cin >> N;
  vector<string> S(N);
  for (int i = 0; i < N; i++)
  {
    cin >> S[i];
  }
  TrieNode *root = new TrieNode();
  root->min_len_S = 0; // Empty string handling
  for (int k = 0; k < N; k++)
  {
    string T = S[k];
    int len_T = T.length();
    int min_total_cost = len_T; // Cost to transform T into empty string
    if (k > 0)
    {
      TrieNode *node = root;
      for (int i = 0; i < (int)T.length(); i++)
      {
        int idx = T[i] - 'a';
        if (node->children[idx] == nullptr)
        {
          break; // No further matching prefix
        }
        node = node->children[idx];
        int depth = i + 1;
        if (node->min_len_S < INF)
        {
          int len_S = node->min_len_S;
          int total_cost = len_T + len_S - 2 * depth;
          if (total_cost < min_total_cost)
          {
            min_total_cost = total_cost;
          }
        }
      }
    }
    cout << min_total_cost << endl;
    // Insert T into trie
    TrieNode *node = root;
    for (int i = 0; i < (int)T.length(); i++)
    {
      int idx = T[i] - 'a';
      if (node->children[idx] == nullptr)
      {
        node->children[idx] = new TrieNode();
      }
      node = node->children[idx];
      if (node->min_len_S > len_T)
      {
        node->min_len_S = len_T;
      }
    }
  }
  return 0;
}
