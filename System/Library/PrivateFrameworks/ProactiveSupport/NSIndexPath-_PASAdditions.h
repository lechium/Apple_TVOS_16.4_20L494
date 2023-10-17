//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSIndexPath.h>

@class NSString;

@interface NSIndexPath (_PASAdditions)
+ (id)_pas_fromVersionString:(id)arg1 withExceptions:(_Bool)arg2;	// IMP=0x001000000001b561
+ (id)_pas_fromVersionStringIfPossible:(id)arg1;	// IMP=0x001000000001b531
+ (id)_pas_fromVersionString:(id)arg1;	// IMP=0x001000000001b51a
- (_Bool)_pas_isGreaterThanVersionString:(id)arg1;	// IMP=0x001000000001b4bb
- (_Bool)_pas_isGreaterThanOrEqualToVersionString:(id)arg1;	// IMP=0x001000000001b45c
- (_Bool)_pas_isEqualToVersionString:(id)arg1;	// IMP=0x001000000001b3fe
- (_Bool)_pas_isLessThanOrEqualToVersionString:(id)arg1;	// IMP=0x001000000001b39f
- (_Bool)_pas_isLessThanVersionString:(id)arg1;	// IMP=0x001000000001b340
- (id)_pas_asVersionString;	// IMP=0x001000000001af20
- (id)_pas_revivedString;	// IMP=0x00100000000348d9

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end

