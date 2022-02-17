#target: Dependencies
#<TAB>commands

Build: project_main.c phone book management.c test_phone book management.c unity.c
       gcc project_main.c phone book management.c test_phone book management.c unity.c -o phone book management.out
Run: phone book management.out
        ./phone book management.out
Clean:
      rm -rf *.O *.out * .i *.S
