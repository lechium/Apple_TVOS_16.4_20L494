//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface MCMCommandDataMigration
{
}

+ (Class)incomingMessageClass;	// IMP=0x0080000000076242
+ (unsigned long long)command;	// IMP=0x008000000007620c
- (_Bool)_performInternalACLMigrationWithError:(id *)arg1;	// IMP=0x0000000000076a24
- (_Bool)_performBundleContainerOwnershipMigrationWithError:(id *)arg1;	// IMP=0x00000000000765b1
- (void)execute;	// IMP=0x0000000000076317
- (_Bool)preflightClientAllowed;	// IMP=0x000000000007627e

@end
