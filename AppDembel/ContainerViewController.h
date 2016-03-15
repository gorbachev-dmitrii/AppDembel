//
//  ContainerViewController.h
//  AppDembel
//
//  Created by Дмитрий Горбачев on 03.03.16.
//  Copyright © 2016 Дмитрий Горбачев. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "PageContentViewController.h"
#import "BaseViewController.h"
#import "Person.h"

@interface ContainerViewController : BaseViewController <UIPageViewControllerDataSource>

@property (strong, nonatomic) UIPageViewController* pageViewController;
@property (strong, nonatomic) NSArray* slides;
@property (assign, nonatomic) NSUInteger index;


@end
