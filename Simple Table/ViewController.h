//
//  ViewController.h
//  Simple Table
//
//  Created by Vasilii on 31.05.17.
//  Copyright © 2017 Vasilii Burenkov. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ViewController : UIViewController <UITableViewDataSource, UITableViewDelegate>

@property(copy, nonatomic) NSArray *dwarves;

@end

