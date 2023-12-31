//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString, NSURL;

__attribute__((visibility("hidden")))
@interface ISBundleIcon
{
    NSURL *_url;	// 16 = 0x10
    NSString *_type;	// 24 = 0x18
    NSString *_tag;	// 32 = 0x20
    NSString *_tagClass;	// 40 = 0x28
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0060000000019d35
- (void).cxx_destruct;	// IMP=0x000000000001ae95
@property(readonly) NSString *tagClass; // @synthesize tagClass=_tagClass;
@property(readonly) NSString *tag; // @synthesize tag=_tag;
@property(readonly) NSString *type; // @synthesize type=_type;
@property(readonly) NSURL *url; // @synthesize url=_url;
- (double)_aspectRatio;	// IMP=0x000000000001ae2f
- (id)description;	// IMP=0x000000000001ad31
- (id)makeResourceProvider;	// IMP=0x000000000001acd9
- (id)_makeAppResourceProvider;	// IMP=0x000000000001a774
- (id)_makeDocumentResourceProvider;	// IMP=0x000000000001a2df
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000001a20a
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000001a08b
- (id)initWithBundleURL:(id)arg1 fileExtension:(id)arg2;	// IMP=0x000000000001a06a
- (id)initWithBundleURL:(id)arg1 type:(id)arg2;	// IMP=0x000000000001a052
- (id)initWithBundleURL:(id)arg1;	// IMP=0x000000000001a038
- (id)initWithBundleURL:(id)arg1 type:(id)arg2 tag:(id)arg3 tagClass:(id)arg4;	// IMP=0x0000000000019d3d

@end

