//
//  MLBaseCell.h
//  Monal
//
//  Created by Anurodh Pokharel on 12/24/17.
//  Copyright © 2017 Monal.im. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface MLBaseCell : UITableViewCell

@property (nonatomic, strong) IBOutlet NSString* time;
@property (nonatomic, assign) BOOL outBound;
@property (nonatomic, assign) BOOL MUC;

@property (nonatomic, strong) IBOutlet UILabel* name;
@property (nonatomic, strong) IBOutlet UILabel* date;
@property (nonatomic, strong) IBOutlet UILabel* messageBody;
@property (nonatomic, strong) IBOutlet UILabel* messageStatus;
@property (nonatomic, strong) NSString* link;

@property (nonatomic, weak) IBOutlet UIImageView *bubbleImage;


@property (nonatomic, assign) BOOL deliveryFailed;
@property (nonatomic, strong) IBOutlet UIButton* retry;
@property (nonatomic, strong) NSNumber* messageHistoryId;
@property (nonatomic, weak) UIViewController *parent;


-(void) updateCell;

@end
