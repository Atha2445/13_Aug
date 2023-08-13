#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct crop {
    char name[50];
    float area;
    char soil_color[20];
    float ph;
};

struct seed_type {
    char name[50];
    float germination_period;
    char nutrients[100];
    char benefits[100];
};

struct fertilizer {
    char name[50];
    float nitrogen;
    float phosphorous;
    float potassium;
    float sulphur;
    float boron;
    float zinc;
};

struct pesticide {
    char name[50];
    char target_pests[100];
    char target_weeds[100];
    char hazards[100];
};

struct water_requirement {
    char name[50];
    float water_per_day;
};

struct prevention {
    char name[50];
    char threats[100];
    char management[100];
};

struct budget {
    char name[50];
    float labour_cost;
    float travel_expenses;
    float goods_cost;
};

// Function to read crop details from the user
struct crop read_crop_details() {
    struct crop c;
    printf("Enter crop name: ");
    scanf("%s", c.name);
    printf("Enter area of land in acres: ");
    scanf("%f", &c.area);
    printf("Enter soil color: ");
    scanf("%s", c.soil_color);
    printf("Enter soil pH: ");
    scanf("%f", &c.ph);
    return c;
}

// Function to print crop details to the file
void print_crop_details(struct crop c) {
    fprintf(fp, "Crop Name: %s\n", c.name);
    fprintf(fp, "Area of Land: %.2f acres\n", c.area);
    fprintf(fp, "Soil Color: %s\n", c.soil_color);
    fprintf(fp, "Soil pH: %.2f\n", c.ph);
}

// Function to read seed type details from the user
struct seed_type read_seed_type_details() {
    struct seed_type s;
    printf("Enter seed type name: ");
    scanf("%s", s.name);
    printf("Enter germination period: ");
    scanf("%f", &s.germination_period);
    printf("Enter required nutrients: ");
    scanf("%s", s.nutrients);
    printf("Enter benefits: ");
    scanf("%s", s.benefits);
    return s;
}

// Function to print seed type details to the file
void print_seed_type_details(struct seed_type s) {
    fprintf(fp, "Seed Type Name: %s\n", s.name);
    fprintf(fp, "Germination Period: %.2f days\n", s.germination_period);
    fprintf(fp, "Required Nutrients: %s\n", s.nutrients);
    fprintf(fp, "Benefits: %s\n", s.benefits);
}

// Function to read fertilizer details from the user
struct fertilizer read_fertilizer_details() {
    struct fertilizer f;
    printf("Enter fertilizer name: ");
    scanf("%s", f.name);
    printf("Enter nitrogen content: ");
    scanf("%f", &f.nitrogen);
    printf("Enter phosphorous content: ");
    scanf("%f", &f.phosphorous);
    printf("Enter potassium content: ");
    scanf("%f", &f.potassium);
    printf("Enter sulphur content: ");
    scanf("%f", &f.sulphur);
    printf("Enter zinc content: ");
    scanf("%f", &f.zinc);
}

