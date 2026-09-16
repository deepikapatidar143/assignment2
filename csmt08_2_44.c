/*Name - Deepika Patidar
Enrollment no. - csmt08
Assignment no. - 2
Title - Decision control instruction
Problem no.- 44
Date of submission - 16-09-2026*/
#include <stdio.h>
const float pie=3.14159;
float volume_cube(float side){
    float vcube;
    vcube=side*side*side;
    return vcube;
}
float volume_cuboid(float length,float breadth,float height){
    float vcuboid;
    vcuboid=length*breadth*height;
    return vcuboid;
}
float volume_sphere(float radius){
    float vsphere;
    vsphere=(4.0/3.0)*pie*radius*radius*radius;
    return vsphere;
}
float volume_cylinder(float radius,float height){
    float vcylinder;
    vcylinder=pie*radius*radius*height;
    return vcylinder;
}
float volume_cone(float radius,float height){
    float vcone;
    vcone=(pie*radius*radius*height)/3.0;
    return vcone;
}

int main()
{
    int n;
    printf("cube-1,cuboid-2,sphere-3,cylinder-4,cone-5  Enter coresponding number you want to find volume");
    scanf("%d",&n);
    switch(n)
    { case 1: { float side;
            printf("Enter side of cube: ");
            scanf("%f",&side);
            float volume= volume_cube(side);
            printf("volume of cube is: %f\n",volume);
            break;
  }         
      case 2: {  
          float length,breadth,height;
          printf("Enter length breadth and height of cuboid: ");
          scanf("%f %f %f",&length,&breadth,&height);
          float volume=volume_cuboid(length,breadth,height);
          printf("volume of cuboid is: %f\n",volume);
          break;

      }
      case 3: {
           float radius;
           printf("Enter radius of sphere: ");
           scanf("%f",&radius);
           float volume=volume_sphere(radius);
           printf("volume of sphere is: %f",volume);
           break;
 }   
      case 4:{
        float  radius,height;
        printf("Enter radius and height of cylinder: ");
        scanf("%f %f",&radius,&height);
        float volume=volume_cylinder(radius,height);
        printf("volume of cylinder is: %f",volume);
        break;
      }
    case 5:{
        float radius,height;
        printf("Enter radius and height of cone: ");
        scanf("%f %f",&radius,&height);
        float  volume=volume_cone(radius,height);
        printf("volume of cone is : %f",volume);
        break;
    }

     default:
        printf("Invalid shape");
     

    }
    return 0;
}