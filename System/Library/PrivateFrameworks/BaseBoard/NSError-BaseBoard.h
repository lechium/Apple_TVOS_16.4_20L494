//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSError.h>

@class NSString;

@interface NSError (BaseBoard)
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;	// IMP=0x002000000004c4a7
- (id)descriptionWithMultilinePrefix:(id)arg1;	// IMP=0x002000000004c443
- (id)succinctDescriptionBuilder;	// IMP=0x002000000004c1ee
- (id)succinctDescription;	// IMP=0x002000000004c18a

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end
