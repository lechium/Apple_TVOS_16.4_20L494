//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ConfigurationEngineModel/CEMSystemSiriDeclaration.h>

@class NSString;

@interface CEMSystemSiriDeclaration (DMDAdditions)
- (id)dmf_statusForResult:(id)arg1 context:(id)arg2;	// IMP=0x0020000000008c9c
- (id)dmf_removeRequestWithContext:(id)arg1 error:(id *)arg2;	// IMP=0x0010000000008c87
- (id)dmf_replaceRequestWithContext:(id)arg1 error:(id *)arg2;	// IMP=0x0010000000008c75
- (id)dmf_installRequestWithContext:(id)arg1 error:(id *)arg2;	// IMP=0x0010000000008c0e

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end

