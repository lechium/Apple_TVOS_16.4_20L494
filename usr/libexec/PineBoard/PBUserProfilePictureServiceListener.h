//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class BSServiceConnectionListener, NSString;

@interface PBUserProfilePictureServiceListener : NSObject
{
    BSServiceConnectionListener *_listener;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00200000000d1311
@property(retain, nonatomic) BSServiceConnectionListener *listener; // @synthesize listener=_listener;
- (void)listener:(id)arg1 didReceiveConnection:(id)arg2 withContext:(id)arg3;	// IMP=0x00100000000d0e2d
- (void)invalidate;	// IMP=0x00100000000d0dab
- (void)activate;	// IMP=0x00100000000d0c4c
- (void)dealloc;	// IMP=0x00100000000d0ac7

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
