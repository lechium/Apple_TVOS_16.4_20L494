//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class KVDonateVersionLog, NSString;

@interface KVDonateXPCClientFactory : NSObject
{
    KVDonateVersionLog *_versionLog;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x000000000002af0d
- (id)versionLog;	// IMP=0x000000000002aeff
- (void)terminateConnection:(id)arg1;	// IMP=0x000000000002aeb3
- (id)makeConnection:(id)arg1;	// IMP=0x000000000002ae66
- (id)initWithQueue:(id)arg1;	// IMP=0x000000000002ade2
- (id)init;	// IMP=0x000000000002ad9a

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

