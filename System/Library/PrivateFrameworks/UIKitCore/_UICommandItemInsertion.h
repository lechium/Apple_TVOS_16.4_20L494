//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, _UICommandIdentifier;

__attribute__((visibility("hidden")))
@interface _UICommandItemInsertion
{
    NSArray *_fallbacks;	// 16 = 0x10
    NSArray *_insertsBefore;	// 24 = 0x18
    NSArray *_insertsAfter;	// 32 = 0x20
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000f7a31b
+ (id)insertionWithAnchor:(id)arg1 fallbacks:(id)arg2 insertsBefore:(id)arg3 insertsAfter:(id)arg4;	// IMP=0x0000000000f7a26a
- (void).cxx_destruct;	// IMP=0x0000000000f7a76b
@property(readonly, nonatomic) NSArray *insertsAfter; // @synthesize insertsAfter=_insertsAfter;
@property(readonly, nonatomic) NSArray *insertsBefore; // @synthesize insertsBefore=_insertsBefore;
@property(readonly, nonatomic) NSArray *fallbacks; // @synthesize fallbacks=_fallbacks;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000f7a67e
- (_Bool)acceptBoolItemInsertionVisit:(CDUnknownBlockType)arg1 itemDeletionVisit:(CDUnknownBlockType)arg2 menuInsertionVisit:(CDUnknownBlockType)arg3 menuDeletionVisit:(CDUnknownBlockType)arg4;	// IMP=0x0000000000f7a665
- (void)acceptItemInsertionVisit:(CDUnknownBlockType)arg1 itemDeletionVisit:(CDUnknownBlockType)arg2 menuInsertionVisit:(CDUnknownBlockType)arg3 menuDeletionVisit:(CDUnknownBlockType)arg4;	// IMP=0x0000000000f7a64e
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000f7a422
- (id)initWithAnchor:(id)arg1 fallbacks:(id)arg2 insertsBefore:(id)arg3 insertsAfter:(id)arg4;	// IMP=0x0000000000f7a323

// Remaining properties
@property(readonly, nonatomic) _UICommandIdentifier *anchor; // @dynamic anchor;

@end

