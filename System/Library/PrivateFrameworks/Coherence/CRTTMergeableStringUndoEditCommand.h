//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CRContext;

__attribute__((visibility("hidden")))
@interface CRTTMergeableStringUndoEditCommand : NSObject
{
    void *_deleteRanges;	// 8 = 0x8
    void *_insertStrings;	// 16 = 0x10
    CRContext *_context;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x000000000001a627
@property(nonatomic) __weak CRContext *context; // @synthesize context=_context;
@property(readonly, nonatomic) void *insertStrings; // @synthesize insertStrings=_insertStrings;
@property(readonly, nonatomic) void *deleteRanges; // @synthesize deleteRanges=_deleteRanges;
- (id)description;	// IMP=0x000000000001a3b9
- (_Bool)_applyToString:(id)arg1;	// IMP=0x000000000001a189
- (_Bool)applyToString:(id)arg1;	// IMP=0x000000000001a06a
- (id)renamedWith:(id)arg1;	// IMP=0x00000000000190a1
- (void)updateInsertTopoIDRange:(struct TopoIDRange)arg1 toNewRangeID:(struct TopoIDRange)arg2;	// IMP=0x0000000000018fc4
- (void)retainTemporaryIDs;	// IMP=0x0000000000018f60
- (_Bool)hasTemporaryIDs;	// IMP=0x0000000000018f0d
- (id)temporaryIDs;	// IMP=0x0000000000018d7b
- (void)updateTopoIDRange:(struct TopoIDRange)arg1 toNewRangeID:(struct TopoIDRange)arg2;	// IMP=0x0000000000018c8b
- (void)dealloc;	// IMP=0x0000000000018b85
- (id)init;	// IMP=0x0000000000018af0

@end

