//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface VNModelFilesCache : NSObject
{
    struct unique_ptr<cvml::util::model_file_cache, std::default_delete<cvml::util::model_file_cache>> m_impl;	// 8 = 0x8
}

+ (_Bool)useFOpenForModelWithPath:(id)arg1;	// IMP=0x00600000001d4fb8
+ (id)sharedInstance;	// IMP=0x00600000001d4f88
- (id).cxx_construct;	// IMP=0x00000000001d4a73
- (void).cxx_destruct;	// IMP=0x00000000001d4a63
- (void)purgeAll;	// IMP=0x00000000001d49ff
- (void)unload:(id)arg1;	// IMP=0x00000000001d4929
- (id)load:(id)arg1;	// IMP=0x00000000001d3e47
- (id)init;	// IMP=0x00000000001d3d9d

@end

