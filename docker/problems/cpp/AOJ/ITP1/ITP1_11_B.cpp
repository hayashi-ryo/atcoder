#include <stdio.h>

class Dice2
{
public:
  Dice2()
  {
    number = new int[6];
    relative = new int[55];
    relative[31] = relative[43] = relative[24] = relative[12] = 0;
    relative[3] = relative[20] = relative[52] = relative[35] = 1;
    relative[1] = relative[40] = relative[54] = relative[15] = 2;
    relative[4] = relative[10] = relative[51] = relative[45] = 3;
    relative[2] = relative[30] = relative[53] = relative[25] = 4;
    relative[21] = relative[42] = relative[34] = relative[13] = 5;
  };
  ~Dice2()
  {
    delete[] number;
    delete[] relative;
  };

  void setNumber(int index, int num)
  {
    number[index] = num;
  };

  int returnRight(int top, int front)
  {
    int top_index, front_index;
    for (int i = 0; i < 6; i++)
    {
      if (number[i] == top)
        top_index = i;
      if (number[i] == front)
        front_index = i;
    }
    return number[relative[10 * top_index + front_index]];
  }

private:
  int *number;
  int *relative;
};

int main()
{
  Dice2 dice2;
  int x, q, top, front;
  for (int i = 0; i < 6; i++)
  {
    scanf("%d", &x);
    dice2.setNumber(i, x);
  }
  scanf("%d", &q);
  for (int i = 0; i < q; i++)
  {
    scanf("%d %d", &top, &front);
    printf("%d\n", dice2.returnRight(top, front));
  }
}
