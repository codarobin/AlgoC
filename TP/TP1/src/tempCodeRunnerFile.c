for (int r = compter; r >= (compter - l); r--){
            if (((r + 1) > compter) || (r <= (compter-l))) {
                printf("* ");
            } else {
                printf("# ");
            }
        }