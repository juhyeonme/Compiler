struct student {
        int ID;
        char name[32];
};
int stuInfo (struct student stu[4]){
        int i, a[2][3];
        for(i=0;i<=3;i++) {
                printf( "ID: %d, Name: %s\n", stu[i].ID, stu[i].name);
        }

        switch(i){
                case 1 : i++;
                case 3 : i—;
                case 5 : {i; break;}
                default : i=0;
        }
        return 1;
}

int stuInfo(struct student b[1]);
