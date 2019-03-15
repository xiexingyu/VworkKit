//
//  AffairVM.h
//  outwork
//
//  Created by 王鑫 on 2019/03/14.
//  Copyright © 2019年 wangxin. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface AffairVM : NSObject

@property (strong, nonatomic) UIViewController *vc;
@property (nonatomic, strong) NSArray *datas;

- (instancetype)initWithVC:(UIViewController *)vc;

- (void)get:(int)page;
- (void)insert;

@end
