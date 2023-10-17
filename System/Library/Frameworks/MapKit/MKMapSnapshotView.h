//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIImageView.h>

@class MKMapSnapshotter;

__attribute__((visibility("hidden")))
@interface MKMapSnapshotView : UIImageView
{
    MKMapSnapshotter *_snapshotter;	// 8 = 0x8
    MKMapSnapshotter *_gridSnapshotter;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000000200b89
- (void)cancel;	// IMP=0x0000000000200b39
- (void)takeSnapshotWithOptions:(id)arg1 gridOptions:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00000000002005b9
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x000000000020051c

@end

