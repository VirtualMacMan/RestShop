//
//  DetailViewController.h
//  RestShop
//
//  Created by Virtual MacMan on 5/28/13.
//  Copyright (c) 2013 Virtual MacMan. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController

@property (strong, nonatomic) id detailItem;

@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;
@end
