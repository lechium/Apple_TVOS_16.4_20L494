//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSNumber.h>

@class NSString;

@interface NSNumber (WFNaming)
+ (id)objectWithWFSerializedRepresentation:(id)arg1;	// IMP=0x001000000009f601
- (id)wfNameWithMaximumFractionDigits:(id)arg1;	// IMP=0x001000000003ad06
@property(readonly, copy, nonatomic) NSString *wfName;
- (id)wfSerializedRepresentation;	// IMP=0x001000000009f592

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end

