//
//  DetailViewController.h
//  EPpharma
//
//  Created by Anderson Diana on 2014-05-06.
//  Copyright (c) 2014 Anderson Diana. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController

@property (strong, nonatomic) id detailItem;

@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;
@end
