//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class GEOApplicationAuditToken, MNDirectionsRequestManager;

__attribute__((visibility("hidden")))
@interface MNNavigationClientProxy : NSObject
{
    GEOApplicationAuditToken *_auditToken;	// 8 = 0x8
    MNDirectionsRequestManager *_directionsRequestManager;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000000dcb2f
- (id)_directionsRequestManager;	// IMP=0x00000000000dcaf4
- (void)cancelDirectionsRequestWithIdentifier:(id)arg1;	// IMP=0x00000000000dcade
- (void)requestDirections:(id)arg1 withIdentifier:(id)arg2 handler:(CDUnknownBlockType)arg3;	// IMP=0x00000000000dca3d
- (id)init;	// IMP=0x00000000000dc963

@end

