//
//  FGCollectionReusableView.h
//  FirstperspectiveVR
//
//  Created by qingyun on 16/7/11.
//  Copyright © 2016年 qingyun. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "ListItemsDataModel.h"

@interface FGCollectionReusableView : UICollectionReusableView
@property (nonatomic, strong) ListItemsDataModel *listItemsDataModel;
@property (nonatomic, strong) void(^moreBtnClick)();
@end
