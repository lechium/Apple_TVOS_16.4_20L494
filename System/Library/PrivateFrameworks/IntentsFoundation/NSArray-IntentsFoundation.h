//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSArray.h>

@interface NSArray (IntentsFoundation)
+ (id)if_arrayWithObjectIfNonNil:(id)arg1;	// IMP=0x005000000000b564
+ (id)_inf_arrayWithObjectIfNonNil:(id)arg1;	// IMP=0x005000000000b552
- (void)if_enumerateAsynchronouslyInSequenceOnQueue:(id)arg1 block:(CDUnknownBlockType)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x001000000000a88f
- (void)if_enumerateAsynchronouslyInSequence:(CDUnknownBlockType)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x001000000000a7d9
- (void)if_enumerateAsynchronouslyOnQueue:(id)arg1 block:(CDUnknownBlockType)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x001000000000a334
- (void)if_enumerateAsynchronously:(CDUnknownBlockType)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x001000000000a31a
- (id)if_objectsNotOfClass:(Class)arg1;	// IMP=0x001000000000a2bc
- (id)if_objectsOfClass:(Class)arg1;	// IMP=0x001000000000a25e
- (id)if_firstObjectWithIntValue:(int)arg1 forKey:(id)arg2;	// IMP=0x001000000000a1b7
- (id)if_firstObjectWithBoolValue:(_Bool)arg1 forKey:(id)arg2;	// IMP=0x001000000000a110
- (id)if_firstObjectWithValue:(id)arg1 forKey:(id)arg2;	// IMP=0x001000000000a044
- (id)if_firstObjectPassingTest:(CDUnknownBlockType)arg1;	// IMP=0x0010000000009eee
- (id)if_objectsWithIntValue:(int)arg1 forKey:(id)arg2;	// IMP=0x0010000000009e47
- (id)if_objectsWithBoolValue:(_Bool)arg1 forKey:(id)arg2;	// IMP=0x0010000000009da0
- (id)if_objectsWithValue:(id)arg1 forKey:(id)arg2;	// IMP=0x0010000000009cd4
- (id)if_objectsPassingTest:(CDUnknownBlockType)arg1;	// IMP=0x0010000000009b10
- (id)_inf_objectsPassingTest:(CDUnknownBlockType)arg1;	// IMP=0x0010000000009afe
- (id)if_arrayByRemovingObjectsInArray:(id)arg1;	// IMP=0x0010000000009a98
- (id)if_arrayByRemovingObject:(id)arg1;	// IMP=0x0010000000009a32
- (id)if_escapedComponentsJoinedByString:(id)arg1 forLocale:(id)arg2;	// IMP=0x001000000000993e
- (void)if_flatMapAsynchronouslyOnQueue:(id)arg1 transform:(CDUnknownBlockType)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x001000000000992f
- (void)if_flatMapAsynchronously:(CDUnknownBlockType)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0010000000009918
- (id)if_flatMap:(CDUnknownBlockType)arg1;	// IMP=0x00100000000096fd
- (id)_inf_flatMap:(CDUnknownBlockType)arg1;	// IMP=0x00100000000096eb
- (id)if_compactMapConcurrently:(CDUnknownBlockType)arg1;	// IMP=0x00100000000096de
- (id)if_compactMap:(CDUnknownBlockType)arg1;	// IMP=0x00100000000096d1
- (void)if_mapAsynchronouslyOnQueue:(id)arg1 transform:(CDUnknownBlockType)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00100000000096c5
- (void)if_mapAsynchronously:(CDUnknownBlockType)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00100000000096b1
- (id)if_mapConcurrently:(CDUnknownBlockType)arg1;	// IMP=0x0010000000009620
- (id)if_map:(CDUnknownBlockType)arg1;	// IMP=0x001000000000958f
@end
