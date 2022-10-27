#!/bin/bash
problem_name=$1
code_path=$2
test_dir=$problem_name/tests
base_url=${problem_name%_*}

g++ -std=gnu++17 -Wall -Wextra -O2 ${code_path} && oj test -c "./a.out " -d ${test_dir}
execfile=${problem_name}/a.out
rm ${execfile}
