//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSUUID, ObjCReplica, ObjCVersion;

__attribute__((visibility("hidden")))
@interface CRTTMergeableString : NSObject
{
    struct vector<TopoSubstring *, std::allocator<TopoSubstring *>> _orderedSubstrings;	// 8 = 0x8
    unsigned long long _editCount;	// 32 = 0x20
    _Bool _cacheInvalid;	// 40 = 0x28
    CRTTMergeableString *_renamedString;	// 48 = 0x30
    NSObject *_context;	// 56 = 0x38
    ObjCVersion *_version;	// 64 = 0x40
    ObjCVersion *_addedByVersion;	// 72 = 0x48
    id _attributedString;	// 80 = 0x50
    NSUUID *_uuid;	// 88 = 0x58
    long long _localCounter;	// 96 = 0x60
    ObjCReplica *_addedByReplica;	// 104 = 0x68
    long long _addedByLocalCounter;	// 112 = 0x70
    void *_startNode;	// 120 = 0x78
    void *_endNode;	// 128 = 0x80
    long long _renameGeneration;	// 136 = 0x88
    struct TopoReplica _replica;	// 144 = 0x90
}

- (id).cxx_construct;	// IMP=0x0000000000011148
- (void).cxx_destruct;	// IMP=0x00000000000110d3
@property(nonatomic) long long renameGeneration; // @synthesize renameGeneration=_renameGeneration;
@property(nonatomic) void *endNode; // @synthesize endNode=_endNode;
@property(nonatomic) void *startNode; // @synthesize startNode=_startNode;
@property(nonatomic) long long addedByLocalCounter; // @synthesize addedByLocalCounter=_addedByLocalCounter;
@property(readonly, nonatomic) ObjCReplica *addedByReplica; // @synthesize addedByReplica=_addedByReplica;
@property(nonatomic) long long localCounter; // @synthesize localCounter=_localCounter;
@property(readonly, nonatomic) struct TopoReplica replica; // @synthesize replica=_replica;
@property(readonly, nonatomic) NSUUID *uuid; // @synthesize uuid=_uuid;
@property(retain, nonatomic) id attributedString; // @synthesize attributedString=_attributedString;
@property(retain, nonatomic) ObjCVersion *addedByVersion; // @synthesize addedByVersion=_addedByVersion;
@property(retain, nonatomic) ObjCVersion *version; // @synthesize version=_version;
@property(retain, nonatomic) NSObject *context; // @synthesize context=_context;
- (void)finalizeTimestamps:(id)arg1;	// IMP=0x0000000000010f26
- (_Bool)needToFinalizeTimestamps;	// IMP=0x0000000000010e86
- (void)applyRenamesAndRetainOrRelease:(id)arg1 context:(id)arg2 alsoApplyAllRenames:(_Bool)arg3;	// IMP=0x0000000000010cc3
- (id)renamedIfAvailable;	// IMP=0x0000000000010c79
- (id)fullyRenamed:(id)arg1;	// IMP=0x0000000000010a31
- (id)temporaryConcurrentNames;	// IMP=0x00000000000108fd
- (id)temporaryNamesExcludingSelf:(_Bool)arg1;	// IMP=0x00000000000105af
- (id)renamed:(id)arg1;	// IMP=0x00000000000103f2
- (void)applyTimestampRenames:(id)arg1;	// IMP=0x000000000000ff09
- (void)_apply:(id)arg1;	// IMP=0x000000000000fb7c
- (void)apply:(id)arg1 skipRetain:(_Bool)arg2;	// IMP=0x000000000000f94a
- (void)useRenameIfAvailable;	// IMP=0x000000000000f85f
- (id)dotDescription:(unsigned long long)arg1;	// IMP=0x000000000000f138
- (_Bool)graphIsEqual:(id)arg1;	// IMP=0x000000000000eaf4
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000000ea48
- (id)description;	// IMP=0x000000000000e98e
- (void)traverseUnordered:(CDUnknownBlockType)arg1;	// IMP=0x000000000000e97c
- (void)sortSplitNodes;	// IMP=0x000000000000e93c
- (_Bool)deltaMerge:(id)arg1;	// IMP=0x000000000000e226
- (_Bool)canDeltaMerge:(id)arg1;	// IMP=0x000000000000e007
- (unsigned long long)mergeWithString:(id)arg1 optimized:(_Bool)arg2;	// IMP=0x000000000000cc95
- (_Bool)hasDeltaTo:(id)arg1 compareElements:(CDUnknownBlockType)arg2;	// IMP=0x000000000000c399
- (_Bool)canMergeString:(id)arg1;	// IMP=0x000000000000c1e4
- (void)coalesce;	// IMP=0x000000000000be63
- (void)updateSubstringIndexes;	// IMP=0x000000000000be26
- (void)updateAttributedStringAfterMerge;	// IMP=0x000000000000bd42
- (void)invalidateCache;	// IMP=0x000000000000bd30
- (void)_updateCache;	// IMP=0x000000000000bb0a
- (long long)substringCount;	// IMP=0x000000000000bae9
- (void *)orderedSubstrings;	// IMP=0x000000000000ba82
- (void *)splitTopoSubstring:(void *)arg1 atIndex:(unsigned int)arg2;	// IMP=0x000000000000ba01
- (void)enumerateSubstrings:(CDUnknownBlockType)arg1;	// IMP=0x000000000000b969
- (unsigned long long)characterIndexForIndex:(id)arg1;	// IMP=0x000000000000b820
- (unsigned long long)_characterIndexForIndex:(id)arg1;	// IMP=0x000000000000b6bb
- (id)mergeableIndexForCharacterIndex:(long long)arg1 affinity:(unsigned long long)arg2;	// IMP=0x000000000000b438
- (void)enumerateIndexes:(CDUnknownBlockType)arg1;	// IMP=0x000000000000b2f5
- (void)getCharacterRanges:(void *)arg1 forSubstrings:(void *)arg2;	// IMP=0x000000000000b021
- (void)getSubstrings:(void *)arg1 forTopoIDRange:(struct TopoIDRange)arg2;	// IMP=0x000000000000ab09
- (void *)getSubstringBeforeTopoID:(struct TopoID)arg1;	// IMP=0x000000000000a9cf
- (void)getSubstrings:(void *)arg1 inOrderedSubstrings:(void *)arg2 forCharacterRange:(struct _NSRange)arg3;	// IMP=0x000000000000a5d7
- (void)getSubstrings:(void *)arg1 forCharacterRange:(struct _NSRange)arg2;	// IMP=0x000000000000a583
- (void)insertStorageLength:(long long)arg1 after:(void *)arg2 before:(void *)arg3 getStorage:(CDUnknownBlockType)arg4;	// IMP=0x0000000000009ed0
- (void)deleteSubstrings:(void *)arg1 withCharacterRanges:(void *)arg2;	// IMP=0x0000000000009db5
- (void)addNewAddedByFor:(void *)arg1;	// IMP=0x0000000000009b61
@property(readonly, nonatomic) _Bool isEmptyCRDT;
- (id)characterRangesForIDRange:(struct TopoIDRange)arg1;	// IMP=0x0000000000009873
- (id)characterRangesForMergeableRange:(id)arg1;	// IMP=0x000000000000918b
- (id)characterRangesForSelection:(id)arg1 selectedSubstringsBlock:(CDUnknownBlockType)arg2;	// IMP=0x0000000000008b75
- (id)characterRangesForSelection:(id)arg1;	// IMP=0x0000000000008b51
- (id)selectionForCharacterRanges:(id)arg1 selectionAffinity:(unsigned long long)arg2;	// IMP=0x000000000000850b
- (id)selectionForCharacterRanges:(id)arg1;	// IMP=0x00000000000084e7
- (id)replicaUUIDForCharacterAtIndex:(unsigned long long)arg1;	// IMP=0x0000000000008461
- (void)endEditing;	// IMP=0x000000000000843b
- (void)beginEditing;	// IMP=0x0000000000008431
- (void)insertAtIndex:(long long)arg1 length:(long long)arg2 getStorage:(CDUnknownBlockType)arg3;	// IMP=0x0000000000008251
- (void)removeAll;	// IMP=0x0000000000008189
- (void)removeObjectsInRange:(struct _NSRange)arg1;	// IMP=0x0000000000008095
- (void)replaceStorageInRange:(struct _NSRange)arg1 withStorage:(id)arg2;	// IMP=0x0000000000007f47
- (unsigned long long)length;	// IMP=0x0000000000007eef
- (id)objcReplica;	// IMP=0x0000000000007ede
- (id)copyRenamedIfAvailable:(_Bool)arg1;	// IMP=0x000000000000771d
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000007706
- (void)deleteAllSubstrings;	// IMP=0x000000000000755b
- (void)dealloc;	// IMP=0x0000000000007482
- (void)stealReplicaFrom:(id)arg1;	// IMP=0x000000000000737f
- (id)initWithStorage:(id)arg1 uuid:(id)arg2 createInitialNodes:(_Bool)arg3;	// IMP=0x0000000000006f1b
- (id)initWithStorage:(id)arg1 uuid:(id)arg2;	// IMP=0x0000000000006f02
- (_Bool)saveSubstrings:(void *)arg1 encoder:(id)arg2 error:(id *)arg3;	// IMP=0x0000000000003555
- (_Bool)saveToEncoder:(id)arg1 error:(id *)arg2;	// IMP=0x00000000000034e4
- (id)initWithDecoder:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000002cb0
- (void)_deltaTo:(id)arg1 added:(CDUnknownBlockType)arg2 deleted:(CDUnknownBlockType)arg3 same:(CDUnknownBlockType)arg4;	// IMP=0x000000000001bfc8
- (void)deltaTo:(id)arg1 added:(CDUnknownBlockType)arg2 deleted:(CDUnknownBlockType)arg3 same:(CDUnknownBlockType)arg4;	// IMP=0x000000000001bdfa
- (void)deltaTo:(id)arg1 edited:(CDUnknownBlockType)arg2 unedited:(CDUnknownBlockType)arg3;	// IMP=0x000000000001b51c
- (id)undoCommandToChangeTo:(id)arg1 unedited:(CDUnknownBlockType)arg2;	// IMP=0x000000000001adb7
- (void)undeleteSubstrings:(void *)arg1;	// IMP=0x000000000001ab37
- (_Bool)hasAllIDsIn:(void *)arg1;	// IMP=0x000000000001a910

@end

