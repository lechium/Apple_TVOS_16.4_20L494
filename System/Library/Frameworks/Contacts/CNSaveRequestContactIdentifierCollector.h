//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CNSaveRequest, NSArray, NSMutableArray, NSString;

__attribute__((visibility("hidden")))
@interface CNSaveRequestContactIdentifierCollector : NSObject
{
    CNSaveRequest *_request;	// 8 = 0x8
    NSMutableArray *_allIdentifiers;	// 16 = 0x10
    NSMutableArray *_insertedIdentifiers;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000000000eef89
@property(readonly) NSMutableArray *insertedIdentifiers; // @synthesize insertedIdentifiers=_insertedIdentifiers;
@property(readonly) NSMutableArray *allIdentifiers; // @synthesize allIdentifiers=_allIdentifiers;
@property(readonly) CNSaveRequest *request; // @synthesize request=_request;
- (void)visitDifferentMeCardEvent:(id)arg1;	// IMP=0x00000000000eeefd
- (void)visitUnlinkContactEvent:(id)arg1;	// IMP=0x00000000000eee8a
- (void)visitPreferredContactForNameEvent:(id)arg1;	// IMP=0x00000000000eed9e
- (void)visitPreferredContactForImageEvent:(id)arg1;	// IMP=0x00000000000eecb2
- (void)visitLinkContactsEvent:(id)arg1;	// IMP=0x00000000000eebc6
- (void)visitDeleteContactEvent:(id)arg1;	// IMP=0x00000000000eeb76
- (void)visitUpdateContactEvent:(id)arg1;	// IMP=0x00000000000eeb03
- (void)visitAddContactEvent:(id)arg1;	// IMP=0x00000000000eea0f
- (void)visitDropEverythingEvent:(id)arg1;	// IMP=0x00000000000eea09
@property(readonly) NSArray *insertedContactIdentifiers;
@property(readonly) NSArray *allContactIdentifiers;
- (void)collectIdentifiers;	// IMP=0x00000000000ee9b4
- (id)initWithSaveRequest:(id)arg1;	// IMP=0x00000000000ee8d9

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

