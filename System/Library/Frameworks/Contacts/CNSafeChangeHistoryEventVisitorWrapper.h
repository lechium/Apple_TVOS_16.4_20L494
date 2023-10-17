//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;
@protocol CNChangeHistoryEventVisitor;

__attribute__((visibility("hidden")))
@interface CNSafeChangeHistoryEventVisitorWrapper : NSObject
{
    id <CNChangeHistoryEventVisitor> _visitor;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00000000000f4d29
@property(readonly, nonatomic) id <CNChangeHistoryEventVisitor> visitor; // @synthesize visitor=_visitor;
- (void)visitPreferredContactForImageEvent:(id)arg1;	// IMP=0x00000000000f4ccc
- (void)visitPreferredContactForNameEvent:(id)arg1;	// IMP=0x00000000000f4c79
- (void)visitUnlinkContactEvent:(id)arg1;	// IMP=0x00000000000f4c26
- (void)visitLinkContactsEvent:(id)arg1;	// IMP=0x00000000000f4bd3
- (void)visitDifferentMeCardEvent:(id)arg1;	// IMP=0x00000000000f4b80
- (void)visitRemoveSubgroupFromGroupEvent:(id)arg1;	// IMP=0x00000000000f4b2d
- (void)visitAddSubgroupToGroupEvent:(id)arg1;	// IMP=0x00000000000f4ada
- (void)visitRemoveMemberFromGroupEvent:(id)arg1;	// IMP=0x00000000000f4a87
- (void)visitAddMemberToGroupEvent:(id)arg1;	// IMP=0x00000000000f4a34
- (void)visitDeleteGroupEvent:(id)arg1;	// IMP=0x00000000000f49e1
- (void)visitUpdateGroupEvent:(id)arg1;	// IMP=0x00000000000f498e
- (void)visitAddGroupEvent:(id)arg1;	// IMP=0x00000000000f493b
- (void)visitDeleteContactEvent:(id)arg1;	// IMP=0x00000000000f48e8
- (void)visitUpdateContactEvent:(id)arg1;	// IMP=0x00000000000f4895
- (void)visitAddContactEvent:(id)arg1;	// IMP=0x00000000000f4842
- (void)visitDropEverythingEvent:(id)arg1;	// IMP=0x00000000000f47ef
@property(readonly, copy) NSString *description;
- (id)initWithChangeHistoryEventVisitor:(id)arg1;	// IMP=0x00000000000f46cb

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

