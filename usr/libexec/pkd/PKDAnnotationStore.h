//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSURL;

@interface PKDAnnotationStore : NSObject
{
    NSURL *_annotationsURL;	// 8 = 0x8
    NSMutableDictionary *_annotations;	// 16 = 0x10
}

+ (id)globalURL;	// IMP=0x0040000000016ce6
+ (id)confstrURL:(int)arg1;	// IMP=0x0010000000016be0
+ (id)defaultDatabaseURL;	// IMP=0x00100000000169ee
- (void).cxx_destruct;	// IMP=0x0020000000016d3c
@property(retain, nonatomic) NSMutableDictionary *annotations; // @synthesize annotations=_annotations;
@property(retain, nonatomic) NSURL *annotationsURL; // @synthesize annotationsURL=_annotationsURL;
- (_Bool)saveDb:(id *)arg1;	// IMP=0x0010000000016893
- (_Bool)loadDb:(id)arg1 error:(id *)arg2;	// IMP=0x0010000000016707
- (void)setAnnotation:(id)arg1 forPlugIn:(id)arg2;	// IMP=0x0010000000016329
- (id)annotationForPlugIn:(id)arg1;	// IMP=0x0010000000016287
- (id)annotationForIdentifier:(id)arg1;	// IMP=0x0010000000016204
- (id)initWithDatabase:(id)arg1;	// IMP=0x0010000000015fa9

@end

