                 //Cgpa_Calculator(Version-14)
                //Students cgpa ranking with for loop

#include<stdio.h>

int main(){
           //variables for storing 10 students course grade points & 10 students cgpa
           float student_course_gradepoint[10][10],student_cgpa[10];
           // variables for taking 10 students course grade points
           int student,course;
           //variables for storing students course credit & summation total credit
           int course_credit[10],total_credit=0;
           //This loop for taking 10 students course grade points
           for(student=0;student<10;student++){

               printf("enter your student course grade\n");

               for(course=0;course<10;course++){
                   //taking course grade points for 10 students
                   scanf("%f",&student_course_gradepoint[student][course]);
               }
           }
           printf("enter course credit for all students\n");
           //This loop for  taking students course credit
           for(course=0;course<10;course++){
               //taking course credit
               scanf("%d",&course_credit[course]);
               //summation total credit
               total_credit=total_credit+course_credit[course];
           }
           //This loop for calculating 10 students cgpa
           for(student=0;student<10;student++){
               //assign students cgpa value
               student_cgpa[student]=0;
               //This loop for calculating students cgpa
               for(course=0;course<10;course++){
                   //multiplying course with course credit and summation student cgpa
                   student_cgpa[student]=student_cgpa[student]+student_course_gradepoint[student][course]*course_credit[course];

               }
               //student cgpa divide by total credit
               student_cgpa[student]=student_cgpa[student]/total_credit;
               //print students cgpa
               printf("%f\n",student_cgpa[student]);
            }
            //variables for storing students cgpa ranking
            float max1,max2,max3,max4,max5,max6,max7,max8,max9,max10;
            //variables for storing maximum position
            int max_possition1,max_possition2,max_possition3,max_possition4,max_possition5,max_possition6,max_possition7,max_possition8,max_possition9,max_possition10;
            //assign the maximum1 value
            max1=student_cgpa[0];
            //this loop for checking the max1 cgpa
            for(student=0;student<10;student++){

                if(max1<student_cgpa[student]){

                   max1=student_cgpa[student];

                }
            }


            printf("The Highest_cgpa is=%f\n",max1);
            //this loop for checking maxposition1
            for(student=0;student<10;student++){

                if(student_cgpa[student]==max1){

                   max_possition1=student;
                   break;
                }
            }
            //this loop for delete max1 cgpa
            for(student=max_possition1;student<10;student++){

               student_cgpa[student]=student_cgpa[student+1];

            }
            //assign the maximum2 value
            max2=student_cgpa[0];
            //this loop for checking the max2 cgpa
            for(student=0;student<10-1;student++){

                if(max2<student_cgpa[student]){

                 max2=student_cgpa[student];

               }

            }
            printf("the second highest_cgpa is=%f\n",max2);
            //this loop for checking maxposition2
            for(student=0;student<10-1;student++){

                if(student_cgpa[student]==max2){

                   max_possition2=student;
                   break;

                }

            }
            //this loop for delete max2 cgpa
            for(student=max_possition2;student<10-1;student++){

                student_cgpa[student]=student_cgpa[student+1];

            }
            //assign max3 value
            max3=student_cgpa[0];
            //this loop for checking max3 cgpa
            for(student=0;student<10-2;student++){

               if(max3<student_cgpa[student]){

                  max3=student_cgpa[student];

               }
            }

            printf("the third highest_cgpa is=%f\n",max3);
            //this loop for checking maxposition3
            for(student=0;student<10-2;student++){

                if(student_cgpa[student]==max3){

                   max_possition3=student;
                   break;

                }

            }
            //this loop for delete max3 cgpa
            for(student=max_possition3;student<10-2;student++){

                student_cgpa[student]=student_cgpa[student+1];

            }
            //assign max4 value
            max4=student_cgpa[0];
            //this loop for checking max4 cgpa
            for(student=0;student<10-3;student++){

                if(max4<student_cgpa[student]){

                   max4=student_cgpa[student];
               }
            }

            printf("the fourth highest_cgpa is=%f\n",max4);
            //this loop for checking maxposition4
            for(student=0;student<10-3;student++){

                if(student_cgpa[student]==max4){

                   max_possition4=student;
                   break;

                }
            }
            //this loop for delete max4 cgpa
            for(student=max_possition4;student<10-3;student++){

                student_cgpa[student]=student_cgpa[student+1];

            }
            //assign max5 value
            max5=student_cgpa[0];
            //this loop for checking max5 cgpa
            for(student=0;student<10-4;student++){

                if(max5<student_cgpa[student]){

                   max5=student_cgpa[student];

                }
            }

            printf("the fifth highest_cgpa is=%f\n",max5);
            //this loop for checking maxposition5
            for(student=0;student<10-4;student++){

                if(student_cgpa[student]==max5){

                   max_possition5=student;
                   break;

                }

            }
            //this loop for delete max5 cgpa
            for(student=max_possition5;student<10-4;student++){

                student_cgpa[student]=student_cgpa[student+1];

            }
            //assign max6 value
            max6=student_cgpa[0];
            //this loop for checking max6 student cgpa
            for(student=0;student<10-5;student++){

                if(max6<student_cgpa[student]){

                   max6=student_cgpa[student];

                }
            }


            printf("the sixth highest_cgpa is=%f\n",max6);
            //this loop for checking maxposition6
            for(student=0;student<10-5;student++){

                if(student_cgpa[student]==max6){

                   max_possition6=student;
                   break;

                }

            }
            //this loop for delete max6  cgpa
            for(student=max_possition6;student<10-5;student++){

                student_cgpa[student]=student_cgpa[student+1];

            }
            //assign max7 value
            max7=student_cgpa[0];
            //this loop for checking max7 cgpa
            for(student=0;student<10-6;student++){

                if(max7<student_cgpa[student]){

                   max7=student_cgpa[student];

                }
            }

            printf("the seventh highest_cgpa is=%f\n",max7);
            //this loop for checking maxposition 7
            for(student=0;student<10-6;student++){

                if(student_cgpa[student]==max7){

                   max_possition7=student;
                   break;
                }

            }
            //this loop for delete max7 cgpa
            for(student=max_possition7;student<10-6;student++){

                student_cgpa[student]=student_cgpa[student+1];

            }
            //assign max8 value
            max8=student_cgpa[0];
            //this loop for checking max8 cgpa
            for(student=0;student<10-7;student++){

                if(max8<student_cgpa[student]){

                   max8=student_cgpa[student];

                }
            }

            printf("the eighth highest_cgpa is=%f\n",max8);
            //this loop for checking maxposition8
            for(student=0;student<10-7;student++){

                if(student_cgpa[student]==max8){

                   max_possition8=student;
                   break;
                }

            }
            //this loop for delete max8 cgpa
            for(student=max_possition8;student<10-7;student++){

                student_cgpa[student]=student_cgpa[student+1];

            }
            //assign max9 value
            max9=student_cgpa[0];
            //this loop for checking max9 cgpa
            for(student=0;student<10-8;student++){

                if(max9<student_cgpa[student]){

                   max9=student_cgpa[student];

                }
            }
            printf("the nineth highest_cgpa is=%f\n",max9);
            //this loop for checking maxposition9
            for(student=0;student<10-8;student++){

                if(student_cgpa[student]==max9){

                   max_possition9=student;
                   break;

                }

            }
            //this loop for delete max9 cgpa
            for(student=max_possition9;student<10-8;student++){

                student_cgpa[student]=student_cgpa[student+1];

            }
            //assign max10 value
            max10=student_cgpa[0];
            //print max10 cgpa
            printf("the tenth highest_cgpa is=%f\n",max10);


}






