//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface NIExportedObjectForwarder : NSObject
{
    id _exportedObject;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000000016d25
@property __weak id exportedObject; // @synthesize exportedObject=_exportedObject;
- (id)forwardingTargetForSelector:(SEL)arg1;	// IMP=0x0000000000016ce8
- (id)initWithExportedObject:(id)arg1;	// IMP=0x0000000000016c5b

@end

