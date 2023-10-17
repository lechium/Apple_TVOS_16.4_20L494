//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface LSMIResultRegistrantTrueDatabaseContext : NSObject
{
    struct LSContext _context;	// 8 = 0x8
}

- (id).cxx_construct;	// IMP=0x00000000001329ba
- (void).cxx_destruct;	// IMP=0x00000000001329ab
- (CDUnknownBlockType)unregisterApplicationWithBundleIdentifier:(id)arg1 type:(unsigned int)arg2 error:(id *)arg3;	// IMP=0x0000000000132644
- (id)findContainerizedRecordForBundleUnit:(unsigned int)arg1 error:(id *)arg2;	// IMP=0x00000000001325f3
- (unsigned int)findOrRegisterContainerizedNodeReinitializingContext:(id)arg1 installDictionary:(id)arg2 error:(id *)arg3;	// IMP=0x0000000000132478
- (_Bool)fullBundleExistsForIdentifier:(id)arg1 matchingNode:(id)arg2;	// IMP=0x0000000000132342
- (id)initWithDatabase:(id)arg1;	// IMP=0x00000000001322c3

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

