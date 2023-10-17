//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class PBBulletinInfo, PBBulletinService;

@interface PBBulletinServiceUIProvider : NSObject
{
    PBBulletinInfo *_bulletinInfo;	// 8 = 0x8
    PBBulletinService *_bulletinService;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00200000000cb7fb
@property(readonly, nonatomic) PBBulletinService *bulletinService; // @synthesize bulletinService=_bulletinService;
@property(readonly, nonatomic) PBBulletinInfo *bulletinInfo; // @synthesize bulletinInfo=_bulletinInfo;
- (void)prepareUIForSystemOverlayPresentationWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00100000000cb1ed
- (id)initWithBulletinInfo:(id)arg1 service:(id)arg2;	// IMP=0x00100000000cb154

@end

