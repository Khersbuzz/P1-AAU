#include <stdio.h>
#include <stdlib.h>
#include <time.h>
// recipes is from eatthismuch.com
// lunch low kcal: 200 - 500 kcal, lunch medium kcal: 500 - 800 kcal, lunch high kcal: 800 - 1500 kcal

void cottage_cheese_and_raspberries();
//https://www.eatthismuch.com/recipe/nutrition/cottage-cheese-raspberries,331981/

void cucumber_avocado_salad();
//https://www.eatthismuch.com/recipe/nutrition/cucumber-avocado-salad,906191/

void curry_tuna_salad();
//https://www.eatthismuch.com/recipe/nutrition/curry-tuna-salad,906829/


void peanut_butter_yogurt();
//https://www.eatthismuch.com/recipe/nutrition/peanut-butter-yogurt,412933/


void turkey_sandwiches();
//https://www.eatthismuch.com/recipe/nutrition/turkey-sandwiches-with-cranberry-sauce-and-blue-ch,57002/

void ham_and_salami_rollups();
//https://www.eatthismuch.com/recipe/nutrition/ham-and-salami-roll-ups,905886/

void almond_mango_protein_shake();
//https://www.eatthismuch.com/recipe/nutrition/almond-mango-protein-shake,906854/

void apricot_jam_and_almond_butter_sandwich();
//https://www.eatthismuch.com/recipe/nutrition/apricot-jam-and-almond-butter-sandwich,907177/

void roast_beef_and_cheddar_sandwich();
//https://www.eatthismuch.com/recipe/nutrition/roast-beef-and-cheddar-sandwich,906002/


typedef enum {cottage_cheese_and_raspberries1, cucumber_avocado_salad1, curry_tuna_salad1 }
lunch_low_kcal;

typedef enum {peanut_butter_yogurt1,turkey_sandwiches1, ham_and_salami_rollups1 }
lunch_med_kcal;

typedef enum {almond_mango_protein_shake1, apricot_jam_and_almond_butter_sandwich1, roast_beef_and_cheddar_sandwich1}
lunch_high_kcal;


void maaltid();


int main(void){

    srand(time(NULL));
   

        maaltid();
    

    return 0;
}

void maaltid(){
    lunch_low_kcal l;
    lunch_med_kcal m;
    lunch_high_kcal  h;
    
    l = (lunch_low_kcal) (rand() % 3);
    m = (lunch_med_kcal)(rand() % 3);
    h = (lunch_high_kcal)(rand() % 3);

        printf("Lunch with few calories: \n\n");
        switch (l) {
            
            case cottage_cheese_and_raspberries1 : cottage_cheese_and_raspberries();
            break;

            case cucumber_avocado_salad1 : cucumber_avocado_salad();
            break;

            case curry_tuna_salad1 : curry_tuna_salad();
            break;
        }

        printf("Lunch with medium calories: \n\n");
        switch (m) {
            case peanut_butter_yogurt1 : peanut_butter_yogurt();
            break;

            case turkey_sandwiches1 : turkey_sandwiches();
            break;

            case ham_and_salami_rollups1 : ham_and_salami_rollups();
            break;
        }

        printf("Lunch with many calories: \n\n");
        switch (h) {
            case almond_mango_protein_shake1 : almond_mango_protein_shake();
            break;

            case apricot_jam_and_almond_butter_sandwich1 : apricot_jam_and_almond_butter_sandwich();
            break;

            case roast_beef_and_cheddar_sandwich1 : roast_beef_and_cheddar_sandwich();
            break;
        }

}


void cottage_cheese_and_raspberries(){
    printf("Cottage Cheese & Raspberries(389 calories) : \n");
    printf("Ingredients:\n 2 cups/452 grams Cottage cheese \n 1 cup/123 grams Raspberries");
    printf("steps: \n Combine cottage cheese and raspberries, serve \n");
}


void cucumber_avocado_salad(){
    printf("Cucumber Avocado Salad(275 Calories) : \n");
    printf("Ingredients:\n 1 cup shredded/36 grams Lettuce\n ");
    printf("8/136 grams Cherry Tomatoes\n");
    printf("1/4 cup slices/26 grams Cucumber\n");
    printf("1/136 grams Avocado without skin and seed\n");
    printf("3 rings/30 grams Red Bell Pepper\n");
    printf("1 1/2 tbsp/22.5 grams Lemon Juice\n");
    printf("Steps: \n Chop all ingredients and toss together well. Drizzle with lemon juice and enjoy!");
}

void curry_tuna_salad(){
    printf("Curry Tuna Salad(227 calories) : \n");
    printf("Ingredients: \n 1 can/165 grams Tuna \n");
    printf("2 tbsp/29.4 grams Mayonnaise-like dressing\n");
    printf("2 tbsp chopped/20 grams Onions\n");
    printf("1/2 tsp/3 grams salt\n");
    printf("1/2 tsp/ 1 gram Curry Powder\n");
    printf("Steps: \n Chop onions. Drain tuna. Add all ingredients together. Serve on crispbread, bread, or alone.");

}

void peanut_butter_yogurt(){
    printf("Peanut Butter yogurt(690 calories) : \n");
    printf("Ingredients: \n 2 cups/480 grams Nonfat greek yogurt\n");
    printf("4 tbsp/64 grams Peanut butter\n");
    printf("2 tsp/8.4 grams Vanilla extract");
    printf("Steps: \n Combine ingredients and enjoy! ");
}

void turkey_sandwiches(){
    printf("Turkey Sandwiches with Cranberry Sauce and Blue Cheese Butter(524 calories\n");
    printf("Ingredients: \n 1 oz/28.4 grams Blue cheese\n");
    printf("1/3 cup/92.3 grams Cranberry sauce\n");
    printf("3 slice rectangle/87 grams Sliced turkey\n");
    printf("2 slice/56 grams Whole-wheat bread\n");
    printf("1/2 tbsp/7.1 grams Butter\n");
    printf("1 cup/20 grams Arugula\n");
    printf("Steps: \nSet out butter and blue cheese and allow to soften to room temperature.\n");
    printf("Mash blue cheese with butter and 1/2 teaspoon pepper. Spread on bread and make sandwiches with turkey, cranberry sauce, and arugula");
}

void ham_and_salami_rollups(){
    printf("Ham and Salami Roll-ups(509 calories\n");
    printf("Ingredients: \n 2 tbsp/30 grams Hummus\n");
    printf("2 oz/56 grams Italian salami\n");
    printf("2 oz/54.5 grams Roasted Red Peppers\n");
    printf("2 small/66 grams Banana pepper\n");
    printf("4 oz/113 grams Sliced ham\n");
    printf("Steps: \n Stack ham, hummus, salami, and banana peppers. Roll up and enjoy! ");
}

void almond_mango_protein_shake(){
    printf("Almond Mango Protein Shake(911 calories)\n");
    printf("Ingredients: \n 3 3/4 cup, sliced/619 grams Mango\n");
    printf("3 scoop(30g)/90 grams Whey protein powder\n");
    printf("3 cup/720 grams Almond milk\n");
    printf("Steps:\n Combine all ingredients in a blender and pulse until smooth. Enjoy!");
}

void apricot_jam_and_almond_butter_sandwich(){
    printf("Apricot Jam and Almond Butter Sandwich(875 calories\n");
    printf("Ingredients: \n 6 slice regular/ 156 grams Multi-grain bread\n");
    printf("3tbsp/60 grams Jams and preserves\n");
    printf("3 tbsp/48 grams Almond butter\n");
    printf("Steps:\n Optionally toast the bread.\n");
    printf("Cover one slice with almond butter and the other slice with jam, put together and eat.\n");

}

void roast_beef_and_cheddar_sandwich(){
    printf("Roast Beef and Cheddar Sandwich(900 calories)\n");
    printf("Ingredients: \n 4 slice/112 grams Whole-wheat bread\n");
    printf("12 slices/270 grams Roast beef\n");
    printf("2 slice(1 oz)/56 grams Cheddar cheese\n");
    printf("2 tbsp/30 grams Dijon mustard\n");
    printf("Steps: \n Spread mustard onto slices of bread. Top with roast beef and cheddar. Bring together slices to form a sandwich. Enjoy! ");

}