//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSMutableArray.h>

@interface NSMutableArray (VideosUICore)
- (void)_vui_applyUpdateChanges:(id)arg1 destinationObjectsBlock:(CDUnknownBlockType)arg2 updateObjectBlock:(CDUnknownBlockType)arg3;	// IMP=0x007000000003212e
- (void)vui_addObjectsFromArrayIfNotNil:(id)arg1;	// IMP=0x00700000000320f3
- (void)vui_addObjectIfNotNil:(id)arg1;	// IMP=0x00700000000320b8
- (_Bool)vui_applyChangeSet:(id)arg1 destinationObjectsBlock:(CDUnknownBlockType)arg2 updateObjectBlock:(CDUnknownBlockType)arg3;	// IMP=0x007000000003177c
- (_Bool)vui_applyChangeSet:(id)arg1 destinationObjectsBlock:(CDUnknownBlockType)arg2;	// IMP=0x0070000000031767
- (_Bool)vui_applyChangeSet:(id)arg1 destinationObjects:(id)arg2 updateObjectBlock:(CDUnknownBlockType)arg3;	// IMP=0x00700000000316ad
- (_Bool)vui_applyChangeSetIfAvailable:(id)arg1 destinationObjects:(id)arg2 replaceContentsOnNilChanges:(_Bool)arg3;	// IMP=0x0070000000031608
- (_Bool)vui_applyChangeSet:(id)arg1 destinationObjects:(id)arg2;	// IMP=0x00700000000315f3
@end

