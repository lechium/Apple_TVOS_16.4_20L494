//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIApplication.h>

@class NSString;
@protocol SRApplicationDataSource;

@interface SRApplication : UIApplication
{
    long long _frontMostAppOrientation;	// 8 = 0x8
    id <SRApplicationDataSource> _dataSource;	// 16 = 0x10
}

+ (id)sharedApplication;	// IMP=0x002000000002e7a8
- (void).cxx_destruct;	// IMP=0x002000000002e88b
@property(nonatomic) __weak id <SRApplicationDataSource> dataSource; // @synthesize dataSource=_dataSource;
- (void)setFrontMostAppOrientation:(long long)arg1;	// IMP=0x001000000002e84d
- (long long)_frontMostAppOrientation;	// IMP=0x001000000002e83c
- (long long)launchOrientation;	// IMP=0x001000000002e82b
@property(readonly, nonatomic) struct CGRect applicationFrame;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

