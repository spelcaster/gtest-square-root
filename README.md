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
    --gtest_filter="SquareRootTest.PositiveNos";
```

#### Only ZeroAndNegativeNos test case

```
build/app_test --gtest_output="xml:report.xml" --gtest_repeat=1 \
    --gtest_filter="SquareRootTest.ZeroAndNegativeNos";
```
#### Only test cases that match a pattern

```
build/app_test --gtest_output="xml:report.xml" --gtest_repeat=1 \
    --gtest_filter="SquareRootTest.*";
```

# References

- [A quick introduction to the Google C++ Testing Framework](http://www.ibm.com/developerworks/aix/library/au-googletestingframework.html)
- [Bash - Exit Status](https://www.gnu.org/software/bash/manual/html_node/Exit-Status.html)

