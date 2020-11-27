#include "Breakfast.h"

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void cinnamon();
void onion();
void vanilla();
void scramble();
void feta_omelet();
void banana_pancakes();
void banana();
void vegan();
void breakfast_quesadillas();
void mealplan();

typedef enum { Cinnamon, Onion, Vanilla } breakfast_low_kcal;

typedef enum { Scramble, Feta_omelet, Banana_pancakes } breakfast_med_kcal;

typedef enum { Banana, Vegan, Breakfast_quesadillas } breakfast_high_kcal;

int breakfast_meal(int consumption) {
    breakfast_low_kcal l;
    breakfast_med_kcal m;
    breakfast_high_kcal h;
    srand(time(NULL));

    if (consumption <= 500) {
        l = (breakfast_low_kcal)(rand() % 3);
    } else if (consumption <= 1200) {
        m = (breakfast_med_kcal)(rand() % 3);
    } else {
        h = (breakfast_high_kcal)(rand() % 3);
    }

    switch (l) {
        case Cinnamon:
            printf("***  Cinnamon Protein Oats - 260 kcal  ***\n\n");
            cinnamon();
            consumption = 260;
            break;

        case Onion:
            printf("***  Onion and Tomato Omelet - 300 kcal ***\n\n");
            onion();
            consumption = 300;
            break;

        case Vanilla:
            printf("***  Vanilla Walnut Blueberry Yogurt - 485 kcal  ***\n\n");
            vanilla();
            consumption = 485;
            break;
    }

    switch (m) {
        case Scramble:
            printf("***  Spinach Scramble - 388 kcal  ***\n\n");
            scramble();
            consumption = 388;
            break;

        case Feta_omelet:
            printf(
                "***  Broccoli & Feta Omelet with Toast - 398 kcal  ***\n\n");
            feta_omelet();
            consumption = 398;
            break;

        case Banana_pancakes:
            printf("***  Banana Pancakes - 755 kcal  ***\n\n");
            banana_pancakes();
            consumption = 755;
            break;
    }

    switch (h) {
        case Banana:
            printf(
                "***  Banana and Peanut Butter Swirl Muffins - 1653 kcal  "
                "***\n\n");
            banana();
            consumption = 1653;
            break;

        case Vegan:
            printf("***  Vegan Protein Burrito - 1357 kcal  ***\n\n");
            vegan();
            consumption = 1357;
            break;

        case Breakfast_quesadillas:
            printf("***  To-Go Breakfast Quesadillas - 1254 kcal  ***\n\n");
            breakfast_quesadillas();
            consumption = 1254;
            break;
    }

    return consumption;
}

void cinnamon() {
    // https://www.eatthismuch.com/recipe/nutrition/cinnamon-protein-oats,929924/

    printf("***  10 mins to prep.  ***\n");
    printf(" Required ingredients: \n\n");

    printf(" - Water: 1 cup \n");
    printf(" - Rolled oats: 1/2 cup\n");
    printf(" - Whey protein powder: 1 scoop\n");
    printf(" - Cinnamon: 1 tsp\n\n");

    printf("Step 1:\n Boil water");
    printf(
        "Step 2:\n Mix in oats, protein powder, and cinnamon. Boil until "
        "tender, 5-10 minutes.");
    printf("Step 3:\n Serve immediately and enjoy!\n\n");
}

void onion() {
    // https://www.eatthismuch.com/recipe/nutrition/onion-and-tomato-omelet,412942/

    printf("***  5 mins to prep, 5 mins to cook.  ***\n");
    printf(" Required ingredients: \n\n");

    printf(" - Egg: 2 extra large\n");
    printf(" - Onion: 2 tbsp chopped \n");
    printf(" - Salt: 1 dash\n");
    printf(" - Tomatoes: 1/4 chopped or sliced\n");
    printf(" - Vegetable oil: 1 tbsp\n\n");

    printf("Step 1:\n Scramble eggs in a bowl. Set aside.");
    printf(
        "Step 2:\n Heat oil in skillet, add tomatoes and onions. Cook until "
        "soft.");
    printf(
        "Step 3:\n Add eggs to skillet and begin to swirl until eggs are set. "
        "Season with salt.");
    printf("Step 4:\n Fold one side of omelette over and remove from pan.\n\n");
}

void vanilla() {
    // https://www.eatthismuch.com/recipe/nutrition/vanilla-walnut-blueberry-yogurt,905947/

    printf("***  5 mins to prep.  ***\n");
    printf(" Required ingredients: \n\n");
    printf(" - Greek yogurt: 6 oz\n");
    printf(" - Honey: 1 tsp\n");
    printf(" - Vanilla extract: 1/2 tsp\n");
    printf(" - Walnuts: 1 oz\n");
    printf(" - Blueberries: 1/2 cup\n\n");

    printf("Step 1: Mix all ingredients together well. Enjoy!\n\n");
}

void scramble() {
    // https://www.eatthismuch.com/recipe/nutrition/spinach-scramble,955648/

    printf("***  5 mins to prep, 10 mins to cook.  ***\n");
    printf(" Required ingredients: \n\n");

    printf(" - Pam cooking spray (oil): 2 spray , about 1/3 second\n");
    printf(" - Cherry tomatoes: 1 cup cherry tomatoes\n");
    printf(" - Spinach: 2 cup\n");
    printf(" - Egg: 6 largen");
    printf(" - Feta cheese: 3 oz\n");
    printf(" - Basil: 2 tbsp, chopped\n");

    printf("Step 1: In a small nonstick pan coated with");
    printf("vegetable spray, sauté tomatoes and spinach");
    printf("over mediumm heat until slightly tender and");
    printf("spinach has wilted, 3-5 minutes. Remove and set aside.\n");

    printf("Step 2: Whisk the eggs together in a bowl");
    printf("and add to the pan. Cook, stirring, over");
    printf("low heat until almost set.");

    printf("Step 3: Add the vegetable mixture, cheese,");
    printf("and basil. Cook to desired firmness. Enjoy!\n");
}

void feta_omelet() {
    // https://www.eatthismuch.com/recipe/nutrition/broccoli-feta-omelet-with-toast,1030012/

    printf("***  5 mins to prep, 10 mins to cook.  ***\n");
    printf(" Required ingredients: \n\n");

    printf(" - Pam coocking spray (oil): 2 pray, about 1/3 second\n");
    printf(" - Broccoli: 2 cup\n");
    printf(" - Egg: 4 extra large\n");
    printf(" - Feta cheese: 1/4 cup, crumbled\n");
    printf(" - Dill weed: 1/2 tsp\n");
    printf(" - Wheat bread: 4 slice\n\n");

    printf("Step 1: Heat a non-stick skillet over medium heat. \n");
    printf("Coat pan with cooking spray. Add broccoli, and cook 3 minutes.");

    printf("Step 2: Combine egg, feta, and dill in a small bowl. \n");
    printf("Add egg mixture to pan. Cook 3 to 4 minutes; flip omelet");
    printf("and cook 2 minutes or until cooked through. Serve with toast.");
    printf("Enjoy!\n\n");
}

void banana_pancakes() {
    // https://www.eatthismuch.com/recipe/nutrition/banana-pancakes,717878/

    printf("***  5 mins to prep, 10 mins to cook.  ***\n");
    printf(" Required ingredients: \n\n");

    printf(" - Egg: 4 extra large\n");
    printf(" - Banana: 2 medium\n");
    printf(" - Cinnamon: 1 tbsp\n");
    printf(" - Butter: 1 tbsp\n");
    printf(" - Strawberries: 3/4 cup, sliced\n");
    printf(" - Honey: 1 tbsp\n");

    printf("Step 1: Mix eggs, banana, and cinnamon until well combined.\n");

    printf("Step 2: Heat a sauté pan over medium heat and add butter\n");

    printf("Step 3: Spoon pancakes mixture into the pan to form pancakes\n");
    printf("as per desired size; cook for about 2-3 minutes per side\n");
    printf("until nicely browned and cook through. Repeat with\n");
    printf("remaining batter.\n");

    printf(
        "Step 4: Chop the strawberries and use to top the cooked "
        "pancakes.\n");
    printf("Drizzle with honey and enjoy!\n\n");
}

void banana() {
    // https://www.eatthismuch.com/recipe/nutrition/banana-and-peanut-butter-swirl-muffins,966126/

    printf("***  0 mins to prep, 20 mins to cook  ***\n");
    printf("Required ingredients: \n");
    printf(" - Pam cooking spray: 1 spray, about 1/3 second\n");
    printf(" - Banana: 3 large (8'' to 8-7/8'' long)\n");
    printf(" - Peanut butter: 1/3 cup\n");
    printf(" - Almond milk: 1/2 Cup\n");
    printf(" - Applesauce: 1/2 cup\n");
    printf(" - Vanilla extract: 1 tsp\n");
    printf(" - Whey protein powder: 1 scoop (30 g.)\n");
    printf(" - Oatmeal: 1 cup\n");
    printf(" - Baking powder: 1 tsp\n");
    printf(" - Baking soda: 1/2 tsp\n");
    printf(" - Cinnamon: 1/2 tsp\n");
    printf(" - Peanut butter: 3 tbsp\n\n");

    printf(
        "Step 1- Preheat oven to 375 degrees F and spray non-stick 12 muffin "
        "tin thoroughly with cooking spray or line with baking cups.\n");
    printf(
        "Step 2- In a large bowl, whisk together mashed bananas, peanut "
        "butter, milk, applesauce, and vanilla extract. Add protein powder, "
        "oats, baking powder, baking soda, cinnamon and gently stir until "
        "combined. Batter will be quite thick. Fill each tin with batter, "
        "dividing evenly, approximately 2/3 full.");
    printf(
        "Step 3- Top each muffin with 1 tsp peanut butter and swirl with a "
        "toothpick. Bake for 20 minutes, remove from the oven and let cool in "
        "the tin for at least 45 minutes before transferring onto the cooling "
        "rack. The longer muffins cool, less crumbly they are.");
    printf("Step 4- Enjoy!\n\n");
}

void vegan() {
    // https://www.eatthismuch.com/recipe/nutrition/vegan-protein-burrito,1022459/

    printf("***  10 mins to prep, 20 mins to cook.  ***\n");
    printf(" Required ingredients: \n\n");

    printf(" - Tofu: 1 cup\n");
    printf(" - Olive oil: 1 tsp\n");
    printf(" - Garlic: 2 cloves minced\n");
    printf(" - Onions: 1 medium (2-1/2'' dia)\n");
    printf(" - Potato: 1 1/2 cup, diced\n");
    printf(" - Mushroom: 1 1/2 cup sliced\n");
    printf(" - Nutritional Yeast: 4 tbsp\n");
    printf(" - Parsley: 2 tbsp\n");
    printf(" - Lemon juice: 2 tbsp\n");
    printf(" - Basil: 1 tbsp, leaves\n");
    printf(" - Salt: 1 dash\n");
    printf(" - Pepper: 1 dash\n");
    printf(" - Tortillias: 4 tortilla (approx 7-8'' dia)\n\n");

    printf(
        "Step 1: Press tofu: Rinse the tofu with water and place a couple "
        "kitchen towels on the counter. Wrap the tofu with another towel, "
        "place another towel on top, and finally place several heavy cookbooks "
        "on top. Let sit for at least 20 minutes to soak out the water. "
        "Alternatively, you can use a tofu press if you have one.\n");
    printf(
        "Step 2: Meanwhile, heat a large skillet with 1 tsp oil over medium "
        "heat. Sauté garlic and onion for a few minutes over medium heat. Add "
        "in the diced potato and mushrooms and sauté for 12 minutes, reducing "
        "heat if necessary and stirring frequently so it doesn’t stick to the "
        "bottom.\n");
    printf(
        "Step 3: Remove tofu from towels and dice on chopping board. You want "
        "the tofu very small. Now, reduce heat to low and stir in the "
        "nutritional yeast, tofu, fresh herbs, lemon juice, and season with "
        "salt and pepper to taste. Continue cooking on low until potato is "
        "cooked through, only a few more minutes, if necessary.\n");
    printf(
        "Step 4: Add 3/4 cup of the mixture on a large tortilla wrap. Roll up "
        "and enjoy!\n\n");
}

void breakfast_quesadillas() {
    // https://www.eatthismuch.com/recipe/nutrition/to-go-breakfast-quesadillas,412911/

    printf("***  10 mins to prep, 10 mins to cook.  ***\n");
    printf(" Required ingredients: \n\n");

    printf(" - Parmesan cheese: 1/4 cup\n");
    printf(" - Egg: 2 large\n");
    printf(" - Salt: 1 dash\n");
    printf(" - Italian sausage: 2 link, raw\n");
    printf(" - Pepper: 1 dash\n");
    printf(" - Spring onions: 1 tbsp\n");
    printf(" - Tortillas: 1 tortilla (approx 12'' dia)\n\n");

    printf("Step 1: Heat nonstick frying pan on medium-high heat and cook");
    printf("sausages. Using the spatula, tear apart the sausage and");
    printf("create bite-size pieces.\n");

    printf("Step 2: Add eggs, salt, pepper, and green onions and");
    printf("parmesan cheese and scramble just until cooked.\n");

    printf("Step 3: Place scrambled eggs onto the middle of");
    printf("the large tortilla.\n");

    printf("Step 4: In the same skillet, stir in vegetable broth,");
    printf(
        " being sure to stir in any browned bits off the bottom of the pan.");
    printf(" Bring to a boil, and cook until the mixture has reduced by 1/3.");
    printf(
        " Reduce heat to low, and return the mushrooms and onion to the "
        "skillet.\n");
    printf(
        "Step 5: Remove the pan from the heat, stir together the sour cream "
        "and flour;");
    printf(
        " then fold into the mushrooms. Return the skillet to the burner, and "
        "continue");
    printf(
        " cooking over low heat, just until the sauce thickens. Stir in the "
        "parsley,");
    printf(" and season to taste with salt and pepper.");
    printf(" Serve over cooked egg noodles. Enjoy!\n\n");
}