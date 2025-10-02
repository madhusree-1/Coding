class Solution {
public:
    int maxBottlesDrunk(int fullBot, int numExchange) {
        //intitally bottledrink=numbottles and numbottles =0;
        int bottledrunk=fullBot;
        fullBot =0;
        int empty = bottledrunk;
        while(fullBot+empty>=numExchange){
            empty = empty-numExchange;
            numExchange++;
            fullBot++;
        }
        bottledrunk +=fullBot;
        return bottledrunk;
    }
};