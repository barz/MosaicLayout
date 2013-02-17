//
//  ViewController.h
//  MosaicCollectionView
//
//  Created by Ezequiel A Becerra on 2/16/13.
//  Copyright (c) 2013 Betzerra. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <QuartzCore/QuartzCore.h>
#import "MosaicDelegate.h"

@interface MosaicViewController : UICollectionViewController{
    UIImageView *snapshotBeforeRotation;
    UIImageView *snapshotAfterRotation;
}

-(float)heightForIndexPath:(NSIndexPath *)indexPath withWidth:(float)width;

@property (weak) IBOutlet id <MosaicDelegate> mosaicDelegate;

@end