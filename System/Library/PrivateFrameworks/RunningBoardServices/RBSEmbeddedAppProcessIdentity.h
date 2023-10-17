//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "RBSProcessIdentity.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface RBSEmbeddedAppProcessIdentity : RBSProcessIdentity
{
    NSString *_embeddedApplicationIdentifier;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0000000000031258
- (id)embeddedApplicationIdentifier;	// IMP=0x0000000000031247
- (_Bool)treatedAsAnAppByFrontBoard:(id *)arg1;	// IMP=0x000000000003123f
- (_Bool)supportsLaunchingDirectly;	// IMP=0x0000000000031237
- (_Bool)isAnonymous;	// IMP=0x000000000003122f
- (_Bool)isApplication;	// IMP=0x0000000000031227
- (_Bool)isEmbeddedApplication;	// IMP=0x000000000003121f
- (unsigned char)defaultManageFlags;	// IMP=0x0000000000031214
- (id)encodeForJob;	// IMP=0x00000000000311ad
- (id)initWithRBSXPCCoder:(id)arg1;	// IMP=0x0000000000031119
- (void)encodeWithRBSXPCCoder:(id)arg1;	// IMP=0x00000000000310ef
- (id)debugDescription;	// IMP=0x0000000000030fff
- (_Bool)_matchesIdentity:(id)arg1;	// IMP=0x0000000000030f8b
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000030efe
- (id)copyWithAuid:(unsigned int)arg1;	// IMP=0x0000000000030ef3

@end

