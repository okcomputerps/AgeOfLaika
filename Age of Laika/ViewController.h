//
//  ViewController.h
//  Age of Laika
//
//  Created by Heath Armstrong on 3/10/15.
//  Copyright (c) 2015 Heath Armstrong. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ViewController : UIViewController
@property (weak, nonatomic) IBOutlet UILabel *yearsLabel;

@property (weak, nonatomic) IBOutlet UITextField *yearsTextField;

- (IBAction)convertToDogYearsButtonPressed:(UIButton *)sender;

@end

