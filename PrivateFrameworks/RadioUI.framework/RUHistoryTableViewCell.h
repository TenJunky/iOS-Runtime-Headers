/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/RadioUI.framework/RadioUI
 */

@class NSString, RUAudioPreviewView, RUTrackDownloadView, UIImage, UIImageView, UILabel;

@interface RUHistoryTableViewCell : RUTableViewCell <RUTrackDownloadViewDelegate> {
    RUAudioPreviewView *_audioPreviewView;
    UIImageView *_explicitImageView;
    BOOL _explicitTrack;
    BOOL _hideArtworkImage;
    UILabel *_iAdLabel;
    UILabel *_subtitleLabel;
    UILabel *_titleLabel;
    RUTrackDownloadView *_trackDownloadView;
}

@property(copy) NSString * artist;
@property(readonly) UIImage * artworkImage;
@property(retain) RUAudioPreviewView * audioPreviewView;
@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property(getter=isExplicitTrack) BOOL explicitTrack;
@property(readonly) unsigned int hash;
@property BOOL hideArtworkImage;
@property BOOL isAd;
@property(readonly) Class superclass;
@property(copy) NSString * title;
@property(readonly) RUTrackDownloadView * trackDownloadView;

+ (id)_iAdLabelFont;
+ (id)_subtitleLabelFontForTraitCollection:(id)arg1;
+ (id)_titleLabelFont;
+ (struct CGSize { float x1; float x2; })artworkSize;
+ (float)defaultHeightForTraitCollection:(id)arg1;

- (void).cxx_destruct;
- (void)_contentSizeCategoryDidChangeNotification:(id)arg1;
- (unsigned int)_preferredExplicitGlyphSizeCategory;
- (void)_updateViewForHorizontalSizeClassChange;
- (id)artist;
- (id)artworkImage;
- (id)audioPreviewView;
- (void)dealloc;
- (void)didMoveToSuperview;
- (BOOL)hideArtworkImage;
- (id)initWithStyle:(int)arg1 reuseIdentifier:(id)arg2;
- (BOOL)isAd;
- (BOOL)isExplicitTrack;
- (void)layoutSubviews;
- (void)setArtist:(id)arg1;
- (void)setAudioPreviewView:(id)arg1;
- (void)setExplicitTrack:(BOOL)arg1;
- (void)setHideArtworkImage:(BOOL)arg1;
- (void)setIsAd:(BOOL)arg1;
- (void)setTitle:(id)arg1;
- (id)title;
- (id)trackDownloadView;
- (void)trackDownloadViewWillTransition:(id)arg1;
- (void)traitCollectionDidChange:(id)arg1;

@end