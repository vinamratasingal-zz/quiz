//
//  ViewController.h
//  Quiz
//
//  Created by Vinamrata Singal on 7/30/13.
//  Copyright (c) 2013 Vinamrata Singal. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ViewController : UIViewController
{
    int currentQuestionIndex;
    NSMutableArray *questions;
    NSMutableArray *answers;
    IBOutlet UILabel *questionField;
    IBOutlet UILabel *answerField;
}
-(IBAction)showQuestion:(id)sender;
-(IBAction)showAnswer:(id)sender;
@end
