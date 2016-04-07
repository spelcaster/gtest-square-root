# Build test

```
make test
```

# Run the test

#### All test cases

```
build/app_test --gtest_output="xml:report.xml" --gtest_repeat=1
```

#### Only PositiveNos test case

```
build/app_test --gtest_output="xml:report.xml" --gtest_repeat=1 \
    --gtest_filter="SquareRootFunction.PositiveNos";
```

#### Only ZeroAndNegativeNos test case

```
build/app_test --gtest_output="xml:report.xml" --gtest_repeat=1 \
    --gtest_filter="SquareRootFunction.ZeroAndNegativeNos";
```
#### Only test cases that match a pattern

```
build/app_test --gtest_output="xml:report.xml" --gtest_repeat=1 \
    --gtest_filter="SquareRootTest.*";
```

# References

- [A quick introduction to the Google C++ Testing Framework](http://www.ibm.com/developerworks/aix/library/au-googletestingframework.html)
- [Bash - Exit Status](https://www.gnu.org/software/bash/manual/html_node/Exit-Status.html)
- [Testing C++ code with the GoogleTest framework](https://meekrosoft.wordpress.com/2009/10/04/testing-c-code-with-the-googletest-framework/)
