//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIViewController.h>

@class NSObject, PBSConferenceRoomDisplaySettings, TVSUIConferenceRoomDisplaySmallView;
@protocol OS_dispatch_source;

@interface TVCRDConferenceRoomDisplayViewController : UIViewController
{
    NSObject<OS_dispatch_source> *_HUDPositionTimer;	// 8 = 0x8
    PBSConferenceRoomDisplaySettings *_conferenceRoomDisplaySettings;	// 16 = 0x10
    unsigned long long _style;	// 24 = 0x18
    unsigned long long _HUDPosition;	// 32 = 0x20
    TVSUIConferenceRoomDisplaySmallView *_crdSmallView;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x00200000000032e0
@property(readonly, nonatomic) TVSUIConferenceRoomDisplaySmallView *crdSmallView; // @synthesize crdSmallView=_crdSmallView;
@property(nonatomic) unsigned long long HUDPosition; // @synthesize HUDPosition=_HUDPosition;
@property(readonly, nonatomic) unsigned long long style; // @synthesize style=_style;
- (struct CGRect)_HUDFrameForPosition:(unsigned long long)arg1;	// IMP=0x0010000000002de0
- (void)_moveHUDToPosition:(unsigned long long)arg1 animated:(_Bool)arg2;	// IMP=0x0010000000002910
- (void)_updateHUDPostion;	// IMP=0x00100000000028b0
- (void)_updateCRDView;	// IMP=0x0010000000002760
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;	// IMP=0x0010000000002640
- (void)stopHUDMovement;	// IMP=0x00100000000025c0
- (void)startHUDMovement;	// IMP=0x0010000000002380
- (void)viewDidLayoutSubviews;	// IMP=0x00100000000022c0
- (void)loadView;	// IMP=0x0010000000002100
- (void)dealloc;	// IMP=0x0010000000002000
- (id)initWithDisplayStyle:(unsigned long long)arg1;	// IMP=0x0010000000001e80

@end
