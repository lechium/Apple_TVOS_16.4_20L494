//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface WebArchiveResourceFromNSAttributedString : NSObject
{
    struct RefPtr<WebCore::ArchiveResource, WTF::RawPtrTraits<WebCore::ArchiveResource>, WTF::DefaultRefDerefTraits<WebCore::ArchiveResource>> resource;	// 8 = 0x8
}

- (id).cxx_construct;	// IMP=0x00000000004f2d50
- (void).cxx_destruct;	// IMP=0x00000000004f2d10
- (id)URL;	// IMP=0x00000000004f2cf0
- (id)MIMEType;	// IMP=0x00000000004f2cc0
- (id)initWithData:(id)arg1 URL:(id)arg2 MIMEType:(id)arg3 textEncodingName:(id)arg4 frameName:(id)arg5;	// IMP=0x00000000004f2700

@end
