//
//  MainViewController.h
//  YaPi
//
//  Created by 曹后红 on 16/6/30.
//  Copyright © 2016年 apple. All rights reserved.
//

#import <UIKit/UIKit.h>
typedef int (^cliclkBlock)(NSString *string);

@interface MainViewController : UIViewController

@property (nonatomic, copy) cliclkBlock block;
@end

