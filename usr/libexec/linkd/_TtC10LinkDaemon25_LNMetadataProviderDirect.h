//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE;

@interface _TtC10LinkDaemon25_LNMetadataProviderDirect : NSObject
{
    MISSING_TYPE *connection;	// 8 = 0x8
    MISSING_TYPE *requiresAssertion;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0040000000073d10
- (id)init;	// IMP=0x0010000000073cb0
- (long long)metadataVersionForBundleIdentifier:(id)arg1 error:(id *)arg2;	// IMP=0x0010000000073bf0
- (id)entitiesForBundleIdentifier:(id)arg1 error:(id *)arg2;	// IMP=0x0010000000073890
- (id)entitiesWithError:(id *)arg1;	// IMP=0x0010000000073720
- (id)enumsForBundleIdentifier:(id)arg1 error:(id *)arg2;	// IMP=0x0010000000072f00
- (id)enumsWithError:(id *)arg1;	// IMP=0x0010000000072ec0
- (id)queriesForBundleIdentifier:(id)arg1 ofType:(id)arg2 error:(id *)arg3;	// IMP=0x0010000000072750
- (id)queriesWithError:(id *)arg1;	// IMP=0x00100000000726b0
- (id)bundlesWithError:(id *)arg1;	// IMP=0x0010000000071fe0
- (id)actionsWithFullyQualifiedIdentifiers:(id)arg1 error:(id *)arg2;	// IMP=0x0010000000071e90
- (id)actionsConformingToSystemProtocol:(id)arg1 withParametersOfTypes:(id)arg2 bundleIdentifier:(id)arg3 error:(id *)arg4;	// IMP=0x0010000000071b10
- (id)actionsForBundleIdentifier:(id)arg1 andActionIdentifier:(id)arg2 error:(id *)arg3;	// IMP=0x00100000000712f0
- (id)actionForBundleIdentifier:(id)arg1 andActionIdentifier:(id)arg2 error:(id *)arg3;	// IMP=0x0010000000071150
- (id)actionsForBundleIdentifier:(id)arg1 error:(id *)arg2;	// IMP=0x0010000000070f20
- (id)actionsAndSystemProtocolDefaultsForBundleIdentifier:(id)arg1 error:(id *)arg2;	// IMP=0x0010000000070df0
- (id)actionsConformingToSystemProtocols:(id)arg1 logicalType:(unsigned long long)arg2 bundleIdentifier:(id)arg3 error:(id *)arg4;	// IMP=0x00100000000706d0
- (id)actionsWithError:(id *)arg1;	// IMP=0x0010000000070440
- (id)initWithXPCInterface:(id)arg1 options:(long long)arg2 error:(id *)arg3;	// IMP=0x001000000006b920

@end

