        ��  ��                  կ     ��
 ��     0 	        1.1.7<module PIL>C:\Program Files\Python36\lib\site-packages\PIL\__init__.py�,   zBmpImagePluginzBufrStubImagePluginzCurImagePluginzDcxImagePluginzDdsImagePluginzEpsImagePluginzFitsStubImagePluginzFliImagePluginzFpxImagePluginzFtexImagePluginzGbrImagePluginzGifImagePluginzGribStubImagePluginzHdf5StubImagePluginzIcnsImagePluginzIcoImagePluginzImImagePluginzImtImagePluginzIptcImagePluginzJpegImagePluginzJpeg2KImagePluginzMcIdasImagePluginzMicImagePluginzMpegImagePluginzMpoImagePluginzMspImagePluginzPalmImagePluginzPcdImagePluginzPcxImagePluginzPdfImagePluginzPixarImagePluginzPngImagePluginzPpmImagePluginzPsdImagePluginzSgiImagePluginzSpiderImagePluginzSunImagePluginzTgaImagePluginzTiffImagePluginzWebPImagePluginzWmfImagePluginzXbmImagePluginzXpmImagePluginzXVThumbImagePluginfile_infoheader_dataraw_modeSUPPORTEDMASK_MODESpaddinggreyscaleindicesUnsupported BMP pixel depth (%d) Read relevant info about the BMP a_maskBITFIELDS�        rgba_maskDibImageFile._open��    [   )i  � i �  ��   �    )i  � i �  r   l      ~ )r   r   r   r   )l      ~ i  � i �  r   �   [   )i  � i �  r   �   [   )i �  i�  �   )i |  i�  r   0 Open file, check magic number and read header RLE4RAWCOMPRESSIONSstride_bitmaphead_dataUnsupported BMP Palette size (%d)DIBdirectionUnsupported BMP compression (%d)BGR;15palette_padding.bmpcannot write mode %s as BMPUnsupported BMP Size: (%dx%d)C:\Program Files\Python36\lib\site-packages\PIL\BmpImagePlugin.pyb_maskRLE8r_maskg_maskimage/bmpUnsupported BMP bitfields layout��1)r   �   �   �L)r   �   �   �P)r   r   r   zRGB)zBGR�   �    zRGBA)zBGRA�    r	   0Windows Bitmapheader_sizeBIT2MODE Image plugin for the Windows Bitmap format (BMP) rgb_maskUnsupported BMP header type (%d)<module PIL.BmpImagePlugin>BmpImageFile._bitmap.<locals>.<lambda>0.7Not a BMP filepixels_per_meter�)�    )i  � i �  ��   �    zBGRX)r   )l      ~ i  � i �  r   zXBGR)r   )i  � i �  r   l      ~ zBGRA)r   )r   r   r   r   zBGRA)�   )i  � i �  r   zBGR)�   )i �  i�  �   zBGR;16)r   )i |  i�  r   zBGR;150planesBmpImageFile._open_save.<locals>.<lambda>��o_�C@data_sizey_flip
    Palette optimization is a potentially expensive operation.

    This function determines if the palette should be optimized using
    some heuristics, then returns the list of palette entries in use.

    :param im: Image object
    :param info: encoderinfo
    :returns: list of indexes of palette entries in use, or None
    durationoptimiselast_frameppmquantGifImageFile._seek87aPIL.GifImagePlugininitial_callpalette_size256_get_header_paletteReturn a list of strings representing a GIF headerPopenflags
    Legacy Method

    Return a list of strings representing this image.
    The first string is a local image header, the rest contains
    encoded image data.

    :param im: Image object
    :param offset: Tuple of (x, y) pixels. Defaults to (0,0)
    :param \**params: E.g. duration or other encoder info parameters
    :returns: List of Bytes containing gif encoded frame data

    loopGifImageFile._openimage/gif_write_local_headerno more images in GIF filetransparent_color_existsused_palette_colorsdisposalpacked_flagnumber_of_loopsinclude_color_tablecolor_table_sizeGifImageFile.tellfrom_iterable_normalize_mode
    Returns the palette, null padded to the next power of 2 (*3) bytes
    suitable for direct inclusion in the GIF header

    :param palette_bytes: Unpadded palette bytes, in RGBRGB form
    :returns: Null padded palette
    Compuserve GIFextensionKeyImageSequencegetdata.<locals>.Collectorgetdata.<locals>.Collector.writeGIF87aGIF89aframe_count_prev_imGifImageFile.load_endactual_target_size_diffdispose_extentCalledProcessErrorPIPEwb_GifImageFile__offsetim_frames_GifImageFile__fpdeltacommentdispose_bitsim_out_save_netpbm_get_palette_bytes
    Takes an image (or frame), returns an image in a mode that is appropriate
    for saving in a Gif.

    It may return the original image, or it may return an image converted to
    palette or 'L' mode.

    UNDONE: What is the point of mucking with the initial call palette, for
    an image that shouldn't have a palette, or it would be a mode 'P' and
    get returned in the RAWMODE clause.

    :param im: Image object
    :param initial_call: Default false, set to true for a single frame.
    :returns: Image object
    stdinImageChops_normalize_palette.<locals>.<genexpr>devnullquant_cmdtogif_cmdquant_proctogif_procretcode
    Gets the palette for inclusion in the gif header

    :param im: Image object
    :returns: Bytes, len<=768 suitable for inclusion in gif header
    im_modppmtogifwait_GifImageFile__rewind
    Normalizes the palette for image.
      - Sets the palette to the incoming palette, if provided.
      - Ensures that there's a palette for L mode images
      - Optimizes the palette if necessary/desired.

    :param im: Image object
    :param palette: bytes object containing the source palette, or ....
    :param info: encoderinfo
    :returns: Image object
    getheaderpreviousnot a GIF file<module PIL.GifImagePlugin>
    Legacy Method to get Gif data from image.

    Warning:: May modify image data.

    :param im: Image object
    :param palette: bytes object containing the source palette, or ....
    :param info: encoderinfo
    :returns: tuple of(list of header items, optimized palette)

    C:\Program Files\Python36\lib\site-packages\PIL\GifImagePlugin.py_write_single_frameimSequencebboxframe_data_get_global_header_GifImageFile__frameget_interlace.gifNETSCAPE2.0cannot seek to frame %ddisposal_methodupdated_write_multiple_framesstderrGifImageFile.n_framesglobal_paletteGifImageFile.seek_get_optimize_write_frame_data_FORCE_OPTIMIZEGifImageFile.is_animated_get_color_table_size!GifImageFile.datasphere_decreasingGIMP Gradientstripcurvedxmrgb0rgb1segmentnot a GIMP gradient filemiddlesphere_increasingName: �����|�=GradientFilelinearcannot handle HSV colour spaceGradientFile.getpalettecspacesineSEGMENTSEPSILONsqrtC:\Program Files\Python36\lib\site-packages\PIL\GimpGradientFile.pyPIL.GimpGradientFileGimpGradientFile.__init__<module PIL.GimpGradientFile>GimpPaletteFile.getpalettenot a GIMP palette file\w+:|#GimpPaletteFile.__init__<module PIL.GimpPaletteFile>GIMP Palettebad palette entryC:\Program Files\Python36\lib\site-packages\PIL\GimpPaletteFile.pyImage.close
        Get projection to x and y axes

        :returns: Two sequences, indicating where there are non-zero
            pixels along the X-axis and the Y-axis, respectively.
        AFFINECouldn't allocate a palette color for transparency__del__
        Returns a tuple containing the name of each band in this image.
        For example, **getbands** on an RGB image returns ("R", "G", "B").

        :returns: A tuple containing band names.
        :rtype: tuple
        Importing %snew_imbuiltinsopen_fp_imagingxmarginymargin
        Returns a rotated copy of this image.  This method returns a
        copy of this image, rotated the given number of degrees counter
        clockwise around its centre.

        :param angle: In degrees counter clockwise.
        :param resample: An optional resampling filter.  This can be
           one of :py:attr:`PIL.Image.NEAREST` (use nearest neighbour),
           :py:attr:`PIL.Image.BILINEAR` (linear interpolation in a 2x2
           environment), or :py:attr:`PIL.Image.BICUBIC`
           (cubic spline interpolation in a 4x4 environment).
           If omitted, or if the image has mode "1" or "P", it is
           set :py:attr:`PIL.Image.NEAREST`. See :ref:`concept-filters`.
        :param expand: Optional expansion flag.  If true, expands the output
           image to make it large enough to hold the entire rotated image.
           If false or omitted, make the output image the same size as the
           input image.  Note that the expand flag assumes rotation around
           the center and no translation.
        :param center: Optional center of rotation (a 2-tuple).  Origin is
           the upper left corner.  Default is the center of the image.
        :param translate: An optional post-rotate translation (a 2-tuple).
        :returns: An :py:class:`~PIL.Image.Image` object.
        Image._copythe frombuffer defaults may change in a future release; for portability, change the call to read:
  frombuffer(mode, size, data, 'raw', mode, 0, 1)delete_trnsImage.offsetdecoder_nameSize must be a tuplegetcolorsImage.pointEXTENSIONencoder_nameextra|u1xxcallableImagePointHandleroverlay
        Convert the image to 'P' mode with the specified number
        of colors.

        :param colors: The desired number of colors, <= 256
        :param method: 0 = median cut
                       1 = maximum coverage
                       2 = fast octree
                       3 = libimagequant
        :param kmeans: Integer
        :param palette: Quantize to the palette of given :py:class:`PIL.Image.Image`.
        :returns: A new image

        coerce_eDestination must be a 2-tupleDecompressionBombError
    Common check to enforce type and sanity check on size tuples

    :param size: Should be a 2 tuple of (width, height)
    :returns: True, or raises a ValueError
    post_transrotn_centermatrixtransformyynwnhregistered_extensionsgetprojectionshapendimstridestypekeyndmaxunknown resampling filtergetmodetype
        Transforms this image.  This method creates a new image with the
        given size, and the same mode as the original, and copies data
        to the new image using the given transform.

        :param size: The output size.
        :param method: The transformation method.  This is one of
          :py:attr:`PIL.Image.EXTENT` (cut out a rectangular subregion),
          :py:attr:`PIL.Image.AFFINE` (affine transform),
          :py:attr:`PIL.Image.PERSPECTIVE` (perspective transform),
          :py:attr:`PIL.Image.QUAD` (map a quadrilateral to a rectangle), or
          :py:attr:`PIL.Image.MESH` (map a number of source quadrilaterals
          in one operation).
        :param data: Extra data to the transformation method.
        :param resample: Optional resampling filter.  It can be one of
           :py:attr:`PIL.Image.NEAREST` (use nearest neighbour),
           :py:attr:`PIL.Image.BILINEAR` (linear interpolation in a 2x2
           environment), or :py:attr:`PIL.Image.BICUBIC` (cubic spline
           interpolation in a 4x4 environment). If omitted, or if the image
           has mode "1" or "P", it is set to :py:attr:`PIL.Image.NEAREST`.
        :param fillcolor: Optional fill color for the area outside the transform
           in the output image.
        :returns: An :py:class:`~PIL.Image.Image` object.
        real_source_palette
    Opens and identifies the given image file.

    This is a lazy operation; this function identifies the file, but
    the file remains open and the actual image data is not read from
    the file until you try to process the data (or call the
    :py:meth:`~PIL.Image.Image.load` method).  See
    :py:func:`~PIL.Image.new`.

    :param fp: A filename (string), pathlib.Path object or a file object.
       The file object must implement :py:meth:`~file.read`,
       :py:meth:`~file.seek`, and :py:meth:`~file.tell` methods,
       and be opened in binary mode.
    :param mode: The mode.  If given, this argument must be "r".
    :returns: An :py:class:`~PIL.Image.Image` object.
    :exception IOError: If the file cannot be found, or the image cannot be
       opened and identified.
    __ne__
    Creates a new image by interpolating between two input images, using
    a constant alpha.::

        out = image1 * (1.0 - alpha) + image2 * alpha

    :param im1: The first image.
    :param im2: The second image.  Must have the same mode and size as
       the first image.
    :param alpha: The interpolation alpha factor.  If alpha is 0.0, a
       copy of the first image is returned. If alpha is 1.0, a copy of
       the second image is returned. There are no restrictions on the
       alpha value. If necessary, the result is clipped to fit into
       the allowed output range.
    :returns: An :py:class:`~PIL.Image.Image` object.
    HAS_CFFIptr 'In-place' analog of Image.alpha_composite. Composites an image
        onto this image.

        :param im: image to composite over this one
        :param dest: Optional 2 tuple (left, top) specifying the upper
          left corner in this (destination) image.
        :param source: Optional 2 (left, top) tuple for the upper left
          corner in the overlay source image, or 4 tuple (left, top, right,
          bottom) for the bounds of the source rectangle

        Performance Note: Not currently implemented in-place in the core layer.
        radial_gradientORDEREDImage.resizenew_palette_bytes
    Creates a new image with the given mode and size.

    :param mode: The mode to use for the new image. See:
       :ref:`concept-modes`.
    :param size: A 2-tuple, containing (width, height) in pixels.
    :param color: What color to use for the image.  Default is black.
       If given, this should be a single integer or floating point value
       for single-band modes, and a tuple for multi-band modes (one value
       per band).  When creating RGB images, you can also use color
       strings as supported by the ImageColor module.  If the color is
       None, the image is not initialised.
    :returns: An :py:class:`~PIL.Image.Image` object.
    getchannelI;32Image._new_imaging_not_installed.__getattr__|b1
        Returns an image containing a single channel of the source image.

        :param channel: What channel to return. Could be index
          (0 for "R" channel of "RGB") or channel name
          ("A" for alpha channel of "RGBA").
        :returns: An image in "L" mode.

        .. versionadded:: 4.3.0
        Image.tellFast Octree (method == 2) and libimagequant (method == 3) are the only valid methods for quantizing RGBA images
    Registers an image decoder.  This function should not be
    used in application code.

    :param name: The name of the decoder
    :param decoder: A callable(mode, args) that returns an
                    ImageFile.PyDecoder object

    .. versionadded:: 4.1.0
    RuntimeWarning
        Configures the image file loader so it returns a version of the
        image that as closely as possible matches the given mode and
        size.  For example, you can use this method to convert a color
        JPEG to greyscale while loading it, or to extract a 128x192
        version from a PCD file.

        Note that this method modifies the :py:class:`~PIL.Image.Image` object
        in place.  If the image has already been loaded, this method has no
        effect.

        Note: This method is not implemented for most images. It is
        currently implemented only for JPEG and PCD images.

        :param mode: The requested mode.
        :param size: The requested size.
        BOXset_alignment>u2<u4
        Allocates storage for the image and loads the pixel data.  In
        normal cases, you don't need to call this method, since the
        Image class automatically loads an opened image when it is
        accessed for the first time. This method will close the file
        associated with the image.

        :returns: An image access object.
        :rtype: :ref:`PixelAccess` or :py:class:`PIL.PyAccess`
        
        Modifies the pixel at the given position. The color is given as
        a single numerical value for single-band images, and a tuple for
        multi-band images.

        Note that this method is relatively slow.  For more extensive changes,
        use :py:meth:`~PIL.Image.Image.paste` or the :py:mod:`~PIL.ImageDraw`
        module instead.

        See:

        * :py:meth:`~PIL.Image.Image.paste`
        * :py:meth:`~PIL.Image.Image.putdata`
        * :py:mod:`~PIL.ImageDraw`

        :param xy: The pixel coordinate, given as (x, y).
        :param value: The pixel value.
        convert_transparentregister_decoder
    Creates a copy of an image memory from pixel data in a buffer.

    In its simplest form, this function takes three arguments
    (mode, size, and unpacked pixel data).

    You can also use any pixel decoder supported by PIL.  For more
    information on available decoders, see the section
    :ref:`Writing Your Own File Decoder <file-decoders>`.

    Note that this function decodes pixel data only, not entire images.
    If you have an entire image in a string, wrap it in a
    :py:class:`~io.BytesIO` object, and use :py:func:`~PIL.Image.open` to load
    it.

    :param mode: The image mode. See: :ref:`concept-modes`.
    :param size: The image size.
    :param data: A byte buffer containing raw data for the given mode.
    :param decoder_name: What decoder to use.
    :param args: Additional parameters for the given decoder.
    :returns: An :py:class:`~PIL.Image.Image` object.
    Too many dimensions: %d > %d._E
    Registers an image extension.  This function should not be
    used in application code.

    :param id: An image format identifier.
    :param extension: An extension used for this format.
    
    Generate Gaussian noise centered around 128.

    :param size: The requested size in pixels, as a 2-tuple:
       (width, height).
    :param sigma: Standard deviation of noise.
    Image.putpalette{0} is not intHAMMINGThe _imaging extension was built for Python with UCS2 support; recompile Pillow or build Python --without-wide-unicode. Image.saveeffect_mandelbrotHUFFMAN_ONLY
    Checks if an object is an image object.

    .. warning::

       This function is for internal use only.

    :param t: object to check if it's an image
    :returns: True if the object is an image
    Image.seekfromstring
        Adds or replaces the alpha layer in this image.  If the image
        does not have an alpha layer, it's converted to "LA" or "RGBA".
        The new layer must be either "L" or "1".

        :param alpha: The new alpha layer.  This can either be an "L" or "1"
           image having the same size as this image, or an integer or
           other color value.
        DecompressionBombWarning
    Creates an image memory referencing pixel data in a byte buffer.

    This function is similar to :py:func:`~PIL.Image.frombytes`, but uses data
    in the byte buffer, where possible.  This means that changes to the
    original buffer object are reflected in this image).  Not all modes can
    share memory; supported modes include "L", "RGBX", "RGBA", and "CMYK".

    Note that this function decodes pixel data only, not entire images.
    If you have an entire image file in a string, wrap it in a
    **BytesIO** object, and use :py:func:`~PIL.Image.open` to load it.

    In the current version, the default parameters used for the "raw" decoder
    differs from that used for :py:func:`~PIL.Image.frombytes`.  This is a
    bug, and will probably be fixed in a future release.  The current release
    issues a warning if you do this; to disable the warning, you should provide
    the full set of parameters.  See below for details.

    :param mode: The image mode. See: :ref:`concept-modes`.
    :param size: The image size.
    :param data: A bytes or other buffer object containing raw
        data for the given mode.
    :param decoder_name: What decoder to use.
    :param args: Additional parameters for the given decoder.  For the
        default encoder ("raw"), it's recommended that you provide the
        full set of parameters::

            frombuffer(mode, size, data, "raw", mode, 0, 1)

    :returns: An :py:class:`~PIL.Image.Image` object.

    .. versionadded:: 1.1.4
    Image.getdataputalphaSEQUENCE};unknown transformation method
    Generate 256x256 radial gradient from black to white, centre to edge.

    :param mode: Input mode.
    Palette images with Transparency   expressed in bytes should be converted to RGBA imagesfloorImage.putalphadistancedriverImage.__array_interface__Width and height must be >= 0typestrpoint_transform_E.__mul__atexiteffect_noiseImage.tobitmapModule use of python>u4
        Returns a rectangular region from this image. The box is a
        4-tuple defining the left, upper, right, and lower pixel
        coordinate.

        Note: Prior to Pillow 3.4.0, this was a lazy operation.

        :param box: The crop rectangle, as a (left, upper, right, lower)-tuple.
        :rtype: :py:class:`~PIL.Image.Image`
        :returns: An :py:class:`~PIL.Image.Image` object.
        ROTATE_180ImageShowresolveCouldn't allocate palette entry for transparencyevalImage.heighteffect_spreadTRANSVERSEencoder %s not availablegetmodebandnamesImage._ensure_mutable__transformerImage.getextremaSymbol not found: _PyUnicodeUCS2_set_blocks_maxditherMAX_IMAGE_PIXELSTRANSPOSEReturns a QPixmap copy of this imageImage.putpixelI;32LSImage.thumbnailLIBIMAGEQUANT_repr_png_exclusive_fp
        Returns the contents of this image as a sequence object
        containing pixel values.  The sequence object is flattened, so
        that values for line one follow directly after the values of
        line zero, and so on.

        Note that the sequence object returned by this method is an
        internal PIL data type, which only supports certain sequence
        operations.  To convert it to an ordinary sequence (e.g. for
        printing), use **list(im.getdata())**.

        :param band: What band to return.  The default is to return
           all bands.  To return a single band, pass in the index
           value (e.g. 0 to get the "R" band from an "RGB" image).
        :returns: A sequence-like object.
        decoder %s not availableImage.transformisImageTypelinear_gradientsetmodePILLOW_ALIGNMENTtransposeOPEN
        Returns the image converted to an X11 bitmap.

        .. note:: This method only works for mode "1" images.

        :param name: The name prefix to use for the bitmap variables.
        :returns: A string containing an X11 bitmap.
        :raises ValueError: If the mode is not "1"
        FLIP_TOP_BOTTOMThe _imaging C module is not installed
    This class represents an image object.  To create
    :py:class:`~PIL.Image.Image` objects, use the appropriate factory
    functions.  There's hardly ever any reason to call the Image constructor
    directly.

    * :py:func:`~PIL.Image.open`
    * :py:func:`~PIL.Image.new`
    * :py:func:`~PIL.Image.frombytes`
    �   �    r   r   r   r   r   r   r   r   r   r   r   r   r   r   r   r   r   r   r   r   r   r   r   r   r   r   r   r   r   r   r   r   r   r   r   r   r   r   r   r   r   r   r   r   r   r   r   r   r   r   r   r   r   r   r   r   r   r   r   r   r   r   r   r   r   r   r   r   r   r   r   r   r   r   r   r   r   r   r   r   r   r   r   r   r   r   r   r   r   r   r   r   r   r   r   r   r   r   r   r   r   r   r   r   r   r   r   r   r   r   r   r   r   r   r   r   r   r   r   r   r   r   r   r   r   r   r   r   r   r   r   r   r   r   r   r   r   r   r   r   r   r   r   r   r   r   r   r   r   r   r   r   r   r   r   r   r   r   r   r   r   r   r   r   r   r   r   r   r   r   r   r   r   r   r   r   r   r   r   r   r   r   r   r   r   r   r   r   r   r   r   r   r   r   r   r   r   r   r   r   r   r   r   r   r   r   r   r   r   r   r   r   r   r   r   r   r   r   r   r   r   r   r   r   r   r   r   r   r   r   r   r   r   r   r   r   r   r   r   r   r   r   r   r   r   r   r   r   r   r   r   r   r   r   r   Image.toqimage<%s.%s image mode=%s size=%dx%d at 0x%X>suffixfilter argument should be ImageFilter.Filter instance or classnew_positions_initialized
    Explicitly initializes the Python Imaging Library. This function
    loads all available file format drivers.
    open.<locals>._open_coreImage.fromstringi4
        Gets the the minimum and maximum pixel values for each band in
        the image.

        :returns: For a single-band image, a 2-tuple containing the
           minimum and maximum pixel value.  For a multi-band image,
           a tuple containing one 2-tuple for each band.
        Image._repr_png_
        Returns a rectangular region from the core image object im.

        This is equivalent to calling im.crop((x0, y0, x1, y1)), but
        includes additional sanity checks.

        :param im: a core image object
        :param box: The crop rectangle, as a (left, upper, right, lower)-tuple.
        :returns: A core image object.
        mode mismatchSAVE_ALL
    Applies the function (which should take one argument) to each pixel
    in the given image. If the image has more than one band, the same
    function is applied to each band. Note that the function is
    evaluated once for each possible pixel value, so you cannot use
    random components or other generators.

    :param image: The input image.
    :param function: A function object, taking one integer argument.
    :returns: An :py:class:`~PIL.Image.Image` object.
    Image.rotate.<locals>.transformENCODERS#define %s_height %d
Image.getbandsclear_cache_E.__add__stacklevel
        Loads this image with pixel data from a bytes object.

        This method is similar to the :py:func:`~PIL.Image.frombytes` function,
        but loads data into this image instead of creating a new image object.
        
        Returns the pixel value at a given position.

        :param xy: The coordinate, given as (x, y).
        :returns: The pixel value.  If the image is a multi-layer image,
           this method returns a tuple.
        splitextPIL.%sMAXCOVERAGE_ENDIAN
        Make this image into a thumbnail.  This method modifies the
        image to contain a thumbnail version of itself, no larger than
        the given size.  This method calculates an appropriate thumbnail
        size to preserve the aspect of the image, calls the
        :py:meth:`~PIL.Image.Image.draft` method to configure the file reader
        (where applicable), and finally resizes the image.

        Note that this function modifies the :py:class:`~PIL.Image.Image`
        object in place.  If you need to use the full resolution image as well,
        apply this method to a :py:meth:`~PIL.Image.Image.copy` of the original
        image.

        :param size: Requested size.
        :param resample: Optional resampling filter.  This can be one
           of :py:attr:`PIL.Image.NEAREST`, :py:attr:`PIL.Image.BILINEAR`,
           :py:attr:`PIL.Image.BICUBIC`, or :py:attr:`PIL.Image.LANCZOS`.
           If omitted, it defaults to :py:attr:`PIL.Image.BICUBIC`.
           (was :py:attr:`PIL.Image.NEAREST` prior to version 2.5.0)
        :returns: None
        
    Merge a set of single band images into a new multiband image.

    :param mode: The mode to use for the output image. See:
        :ref:`concept-modes`.
    :param bands: A sequence containing one single-band image for
        each band in the output image.  All bands must have the
        same size.
    :returns: An :py:class:`~PIL.Image.Image` object.
    Operation on closed imageC:\Program Files\Python36\lib\site-packages\PIL\Image.py>i2Image.quantizeCONTAINER
        Attaches a palette to this image.  The image must be a "P" or
        "L" image, and the palette sequence must contain 768 integer
        values, where each group of three values represent the red,
        green, and blue values for the corresponding pixel
        index. Instead of an integer sequence, you can use an 8-bit
        string.

        :param data: A palette sequence (either a list or a string).
        :param rawmode: The raw mode of the palette.
        fillbandxbmROTATE_90ImageModeImage._crop
        Returns a resized copy of this image.

        :param size: The requested size in pixels, as a 2-tuple:
           (width, height).
        :param resample: An optional resampling filter.  This can be
           one of :py:attr:`PIL.Image.NEAREST`, :py:attr:`PIL.Image.BOX`,
           :py:attr:`PIL.Image.BILINEAR`, :py:attr:`PIL.Image.HAMMING`,
           :py:attr:`PIL.Image.BICUBIC` or :py:attr:`PIL.Image.LANCZOS`.
           If omitted, or if the image has mode "1" or "P", it is
           set :py:attr:`PIL.Image.NEAREST`.
           See: :ref:`concept-filters`.
        :param box: An optional 4-tuple of floats giving the region
           of the source image which should be scaled.
           The values should be within (0, 0, width, height) rectangle.
           If omitted or None, the entire source is used.
        :returns: An :py:class:`~PIL.Image.Image` object.
        
    Generate 256x256 linear gradient from black to white, top to bottom.

    :param mode: Input mode.
    radiansQt bindings are not installedSymbol not found: _PyUnicodeUCS4_DEFAULT_STRATEGY__copy__size mismatchImage.__getstate__Image.__enter__accept{0}: {1}_check_sizeImage._expandNONEcannot identify image file %rFLOYDSTEINBERGImage.tobytes<i4
    Registers an image MIME type.  This function should not be used
    in application code.

    :param id: An image format identifier.
    :param mimetype: The image MIME type for this format.
    maxcolorsonly RGB or L mode images can be quantized to a palette
    Creates an image memory from an object exporting the array interface
    (using the buffer protocol).

    If obj is not contiguous, then the tobytes method is called
    and :py:func:`~PIL.Image.frombuffer` is used.

    :param obj: Object with array interface
    :param mode: Mode to use (will be determined from type if None)
      See: :ref:`concept-modes`.
    :returns: An image object.

    .. versionadded:: 1.1.6
    
    Register an image file plugin.  This function should not be used
    in application code.

    :param id: An image format identifier.
    :param factory: An image file factory method.
    :param accept: An optional function that can be used to quickly
       reject images having another format.
    getmodebandsDECODERSThe image has no channel "{}"PILLOW_BLOCKS_MAXstub�))�   r   z|b1)�1z1;8))r   r   z|u1)�Lr   ))r   r   z|i1)�IzI;8))r   r   z<u2)r   zI;16))r   r   z>u2)r   zI;16B))r   r   z<i2)r   zI;16S))r   r   z>i2)r   zI;16BS))r   r   z<u4)r   zI;32))r   r   z>u4)r   zI;32B))r   r   z<i4)r   zI;32S))r   r   z>i4)r   zI;32BS))r   r   z<f4)�FzF;32F))r   r   z>f4)r   zF;32BF))r   r   z<f8)r   zF;64F))r   r   z>f8)r   zF;64BF))r   r   �   z|u1)zLAzLA))r   r   �   z|u1)zRGBzRGB))r   r   �   z|u1)zRGBAzRGBA0The _imaging extension was built for another version of Python.Image.__del__
    Gets the "base" mode for given mode.  This function returns "L" for
    images that contain grayscale data, and "RGB" for images that
    contain color data.

    :param mode: Input mode.
    :returns: "L" or "RGB".
    :exception KeyError: If the input mode was not a standard mode.
    
        Returns the image palette as a list.

        :returns: A list of color values [r, g, b, ...], or None if the
           image has no palette.
        Image.getim
        Transpose image (flip or rotate in 90 degree steps)

        :param method: One of :py:attr:`PIL.Image.FLIP_LEFT_RIGHT`,
          :py:attr:`PIL.Image.FLIP_TOP_BOTTOM`, :py:attr:`PIL.Image.ROTATE_90`,
          :py:attr:`PIL.Image.ROTATE_180`, :py:attr:`PIL.Image.ROTATE_270`,
          :py:attr:`PIL.Image.TRANSPOSE` or :py:attr:`PIL.Image.TRANSVERSE`.
        :returns: Returns a flipped or rotated copy of this image.
        Image: failed to import %s: %sputpalettealphas
        Filters this image using the given filter.  For a list of
        available filters, see the :py:mod:`~PIL.ImageFilter` module.

        :param filter: Filter kernel.
        :returns: An :py:class:`~PIL.Image.Image` object.  
        Returns a histogram for the image. The histogram is returned as
        a list of pixel counts, one for each pixel value in the source
        image. If the image has more than one band, the histograms for
        all bands are concatenated (for example, the histogram for an
        "RGB" image contains 768 values).

        A bilevel image (mode "1") is treated as a greyscale ("L") image
        by this method.

        If a mask is provided, the method returns a histogram for those
        parts of the image where the mask image is non-zero. The mask
        image must have the same size as the image, and be either a
        bi-level image (mode "1") or a greyscale image ("L").

        :param mask: An optional mask.
        :returns: A list containing pixel counts.
        
        Return image as a bytes object.

        .. warning::

            This method returns the raw image data from the internal
            storage.  For compressed image data (e.g. PNG, JPEG) use
            :meth:`~.save`, with a BytesIO parameter for in-memory
            data.

        :param encoder_name: What encoder to use.  The default is to
                             use the standard "raw" encoder.
        :param args: Extra arguments to the encoder.
        :rtype: A bytes object.
        var_nameunitspostfixImage.transpose_showFASTOCTREEImage.getpalettepreinitImage.histogram
        Closes the file pointer, if possible.

        This operation will destroy the image core and release its memory.
        The image data will be unusable afterward.

        This function is only required to close images that have not
        had their file read and closed by the
        :py:meth:`~PIL.Image.Image.load` method.
        illegal expressionImage.toqpixmapCannot handle this data typeImage.tostringmapping_palette
        Randomly spread pixels in an image.

        :param distance: Distance to spread pixels.
        cannot determine region size; use 4-item boxsave_handlerpixel_accessANTIALIASImage.crop
    Generate a Mandelbrot set covering the given extent.

    :param size: The requested size in pixels, as a 2-tuple:
       (width, height).
    :param extent: The extent to cover, as a 4-tuple:
       (x0, y0, x1, y2).
    :param quality: Quality.
    RASTERIZE
        Pastes another image into this image. The box argument is either
        a 2-tuple giving the upper left corner, a 4-tuple defining the
        left, upper, right, and lower pixel coordinate, or None (same as
        (0, 0)).  If a 4-tuple is given, the size of the pasted image
        must match the size of the region.

        If the modes don't match, the pasted image is converted to the mode of
        this image (see the :py:meth:`~PIL.Image.Image.convert` method for
        details).

        Instead of an image, the source can be a integer or tuple
        containing pixel values.  The method then fills the region
        with the given color.  When creating RGB images, you can
        also use color strings as supported by the ImageColor module.

        If a mask is given, this method updates only the regions
        indicated by the mask.  You can use either "1", "L" or "RGBA"
        images (in the latter case, the alpha band is used as mask).
        Where the mask is 255, the given image is copied as is.  Where
        the mask is 0, the current value is preserved.  Intermediate
        values will mix the two images together, including their alpha
        channels if they have them.

        See :py:meth:`~PIL.Image.Image.alpha_composite` if you want to
        combine images with respect to their alpha channels.

        :param im: Source image or pixel value (integer or tuple).
        :param box: An optional 4-tuple giving the region to paste into.
           If a 2-tuple is used instead, it's treated as the upper left
           corner.  If omitted or None, the source is pasted into the
           upper left corner.

           If an image is given as the second argument and there is no
           third, the box defaults to (0, 0), and the second argument
           is interpreted as a mask image.
        :param mask: An optional mask image.
        _MODE_CONVwrong number of bandssave_ppmtrns_imImage.__transformer__setstate__Image.getchannelFIXEDCreates an image instance from a QPixmap imageDestination must be non-negativeImage.verifydest_mapoldPositionm_im_conv_type_shape_getscaleoffset
        Rewrites the image to reorder the palette.

        :param dest_map: A list of indexes into the original palette.
           e.g. [1,0] would swap a two item palette, and list(range(255))
           is the identity transform.
        :param source_palette: Bytes or None.
        :returns:  An :py:class:`~PIL.Image.Image` object.

        _fromarray_typemapImage.getpixeltostring() has been removed. Please call tobytes() instead.Returns a QImage copy of this image
        Split this image into individual bands. This method returns a
        tuple of individual image bands from an image. For example,
        splitting an "RGB" image creates three new images each
        containing a copy of one of the original bands (red, green,
        blue).

        If you need only one band, :py:meth:`~PIL.Image.Image.getchannel`
        method can be more convenient and faster.

        :returns: A tuple containing bands.
        Image.getbboxImage size (%d pixels) exceeds limit of %d pixels, could be decompression bomb DOS attack.static char %s_bits[] = {
Explicitly load standard file format drivers.I;16LSThe _imaging extension was built for another version of Pillow or PIL:
Core version: %s
Pillow version: %snot a bitmapregister_encoderpyaccess��1)�Lr   )r   r   )r   r   )r   �I)r   r   )r   �F)r   r   )r   �P)zRGBr   )r   zRGB)zRGBr   )�R�G�BzRGBX)zRGBr   )r   r   r   �XzRGBA)zRGBr   )r   r   r   �AzCMYK)zRGBr   )�C�M�Y�KzYCbCr)zRGBr   )r   zCbzCrzLAB)zRGBr   )r   r
   r   zHSV)zRGBr   )�H�S�V0_apply_env_variablesillegal image modeNORMALImage.__setstate__Source must be a tupleFILTEREDImage.widthCreates an image instance from a QImage image_showxv
        Returns the current frame number. See :py:meth:`~PIL.Image.Image.seek`.

        :returns: Frame number, starting with 0.
        MEDIANCUTPILLOW_BLOCK_SIZEmissing method databad mode for palette imageUSE_CFFI_ACCESS
        Saves this image under the given filename.  If no format is
        specified, the format to use is determined from the filename
        extension, if possible.

        Keyword options can be used to provide additional instructions
        to the writer. If a writer doesn't recognise an option, it is
        silently ignored. The available options are described in the
        :doc:`image format documentation
        <../handbook/image-file-formats>` for each writer.

        You can use a file object instead of a filename. In this case,
        you must always specify the format. The file object must
        implement the ``seek``, ``tell``, and ``write``
        methods, and be opened in binary mode.

        :param fp: A filename (string), pathlib.Path object or file object.
        :param format: Optional format override.  If omitted, the
           format to use is determined from the filename extension.
           If a file object was used instead of a filename, this
           parameter should always be used.
        :param options: Extra parameters to the image writer.
        :returns: None
        :exception KeyError: If the output format could not be determined
           from the file name.  Use the format option to solve this.
        :exception IOError: If the file could not be written.  The file
           may have been created, and may contain partial data.
        
    Registers an image encoder.  This function should not be
    used in application code.

    :param name: The name of the encoder
    :param encoder: A callable(mode, args) that returns an
                    ImageFile.PyEncoder object

    .. versionadded:: 4.1.0
    
        Calculates the bounding box of the non-zero regions in the
        image.

        :returns: The bounding box is returned as a 4-tuple defining the
           left, upper, right, and lower pixel coordinate. If the image
           is completely empty, this method returns None.

        convert_matrixfromstring() has been removed. Please call frombytes() instead.Size must be a tuple of length 2_wedge
        Copies pixel data to this image.  This method copies data from a
        sequence object into the image, starting at the upper left
        corner (0, 0), and continuing until either the image or the
        sequence ends.  The scale and offset values are used to adjust
        the sequence values: **pixel = value*scale + offset**.

        :param data: A sequence object.
        :param scale: An optional scale value.  The default is 1.0.
        :param offset: An optional offset value.  The default is 0.0.
        CallableImage._dumpIDTransparency for P mode should be bytes or int iPython display hook support

        :returns: png version of the image as bytes
        Image.effect_spread
    Registers an image function to save all the frames
    of a multiframe format.  This function should not be
    used in application code.

    :param id: An image format identifier.
    :param driver: A function to save images in this format.
    cos
    Registers image extensions.  This function should not be
    used in application code.

    :param id: An image format identifier.
    :param extensions: A list of extensions used for this format.
    Image.getcolorsImage.__eq__Create greyscale wedge (for debugging only)ImageTransformHandlerencoder error %d in tobytes
    Gets the storage type mode.  Given a mode, this function returns a
    single-layer mode suitable for storing individual bands.

    :param mode: Input mode.
    :returns: "L", "I", or "F".
    :exception KeyError: If the input mode was not a standard mode.
    putbandtransform2Image.__ne__Source must be a 2 or 4-tuplebad mode %r_Image__transformerSource must be non-negativeImage.__init__
        Seeks to the given frame in this sequence file. If you seek
        beyond the end of the sequence, the method raises an
        **EOFError** exception. When a sequence file is opened, the
        library automatically seeks to frame 0.

        Note that in the current version of the library, most sequence
        formats only allows you to seek to the next frame.

        See :py:meth:`~PIL.Image.Image.tell`.

        :param frame: Frame number, starting at 0.
        :exception EOFError: If the call attempts to seek beyond the end
            of the sequence.
        set_block_sizeImage.split
    Gets the number of individual bands for this mode.

    :param mode: Input mode.
    :returns: The number of bands in this mode.
    :exception KeyError: If the input mode was not a standard mode.
    
    Gets a list of individual band names.  Given a mode, this function returns
    a tuple containing the names of individual bands (use
    :py:method:`~PIL.Image.getmodetype` to get the mode used to store each
    individual band.

    :param mode: Input mode.
    :returns: A tuple containing band names.  The length of the tuple
        gives the number of bands in an image of the given mode.
    :exception KeyError: If the input mode was not a standard mode.
    Image.__repr__#define %s_width %d
_E.__init__
        Returns a list of colors used in this image.

        :param maxcolors: Maximum number of colors.  If this number is
           exceeded, this method returns None.  The default limit is
           256 colors.
        :returns: An unsorted list of (count, pixel) values.
        
        Returns a converted copy of this image. For the "P" mode, this
        method translates pixels through the palette.  If mode is
        omitted, a mode is chosen so that all information in the image
        and the palette can be represented without a palette.

        The current version supports all possible conversions between
        "L", "RGB" and "CMYK." The **matrix** argument only supports "L"
        and "RGB".

        When translating a color image to black and white (mode "L"),
        the library uses the ITU-R 601-2 luma transform::

            L = R * 299/1000 + G * 587/1000 + B * 114/1000

        The default method of converting a greyscale ("L") or "RGB"
        image into a bilevel (mode "1") image uses Floyd-Steinberg
        dither to approximate the original image luminosity levels. If
        dither is NONE, all non-zero values are set to 255 (white). To
        use other thresholds, use the :py:meth:`~PIL.Image.Image.point`
        method.

        :param mode: The requested mode. See: :ref:`concept-modes`.
        :param matrix: An optional conversion matrix.  If given, this
           should be 4- or 12-tuple containing floating point values.
        :param dither: Dithering method, used when converting from
           mode "RGB" to "P" or from "RGB" or "L" to "1".
           Available methods are NONE or FLOYDSTEINBERG (default).
        :param palette: Palette to use when converting from mode "RGB"
           to "P".  Available palettes are WEB or ADAPTIVE.
        :param colors: Number of colors to use for the ADAPTIVE palette.
           Defaults to 256.
        :rtype: :py:class:`~PIL.Image.Image`
        :returns: An :py:class:`~PIL.Image.Image` object.
        
    Registers an image save function.  This function should not be
    used in application code.

    :param id: An image format identifier.
    :param driver: A function to save images in this format.
    unknown file extension: {}��self�box�image�method�data�resample�fill�w�h�x0�y0�x1�y1�xs�ys�nw�sw�se�ne�As�Atpathlib2Image.filter
        Copies this image. Use this method if you wish to paste things
        into an image, but still retain the original.

        :rtype: :py:class:`~PIL.Image.Image`
        :returns: An :py:class:`~PIL.Image.Image` object.
        Image.remap_palette.<locals>.<genexpr>
        Returns a capsule that points to the internal image memory.

        :returns: A capsule object.
        
        Maps this image through a lookup table or function.

        :param lut: A lookup table, containing 256 (or 65336 if
           self.mode=="I" and mode == "L") values per band in the
           image.  A function can be used instead, it should take a
           single argument. The function is called once for each
           possible pixel value, and the resulting table is applied to
           all bands of the image.
        :param mode: Output mode (default is same as input).  In the
           current version, this can only be used if the source image
           has mode "L" or "P", and the output has mode "1" or the
           source image mode is "I" and the output mode is "L".
        :returns: An :py:class:`~PIL.Image.Image` object.
        Image.__exit__Image.getprojectionImage.show
    Create composite image by blending images using a transparency mask.

    :param image1: The first image.
    :param image2: The second image.  Must have the same mode and
       size as the first image.
    :param mask: A mask image.  This image can have mode
       "1", "L", or "RGBA", and must have the same size as the
       other two images.
    The _imaging extension was built for Python with UCS4 support; recompile Pillow or build Python --with-wide-unicode. point operation not supported for this modeoffset() has been removed. Please call ImageChops.offset() instead.Destination must be a tupleillegal conversion<module PIL.Image>
        Verifies the contents of a file. For data read from a file, this
        method attempts to determine if the file is broken, without
        actually decoding the image data.  If this method finds any
        problems, it raises suitable exceptions.  If you need to load
        the image after using this method, you must reopen the image
        file.
        
        Displays this image. This method is mainly intended for
        debugging purposes.

        On Unix platforms, this method saves the image to a temporary
        PPM file, and calls either the **xv** utility or the **display**
        utility, depending on which one can be found.

        On macOS, this method saves the image to a temporary BMP file, and
        opens it with the native Preview application.

        On Windows, it saves the image to a temporary BMP file, and uses
        the standard BMP display utility to show it (usually Paint).

        :param title: Optional title to use for the image window,
           where possible.
        :param command: command used to show the image
        
    Returns a dictionary containing all file extensions belonging
    to registered plugins
    
    Alpha composite im2 over im1.

    :param im1: The first image. Must have mode RGBA.
    :param im2: The second image.  Must have mode RGBA, and the same size as
       the first image.
    :returns: An :py:class:`~PIL.Image.Image` object.
    Error closing: %sHAS_PATHLIB
    Superimposes two inverted images on top of each other.

    .. code-block:: python

        out = MAX - ((MAX - image1) * (MAX - image2) / MAX)

    :rtype: :py:class:`~PIL.Image.Image`
    Returns a copy of the image where data has been offset by the given
    distances. Data wraps around the edges. If **yoffset** is omitted, it
    is assumed to be equal to **xoffset**.

    :param xoffset: The horizontal distance.
    :param yoffset: The vertical distance.  If omitted, both
        distances are set to the same value.
    :rtype: :py:class:`~PIL.Image.Image`
    chop_invertlogical_xorPIL.ImageChops
    Subtracts two images, dividing the result by scale and adding the
    offset. If omitted, scale defaults to 1.0, and offset to 0.0.

    .. code-block:: python

        out = ((image1 - image2) / scale + offset)

    :rtype: :py:class:`~PIL.Image.Image`
    Blend images using constant transparency weight. Alias for
    :py:meth:`PIL.Image.Image.blend`.

    :rtype: :py:class:`~PIL.Image.Image`
    Add two images, without clipping the result.

    .. code-block:: python

        out = ((image1 + image2) % MAX)

    :rtype: :py:class:`~PIL.Image.Image`
    chop_multiply
    Returns the absolute value of the pixel-by-pixel difference between the two
    images.

    .. code-block:: python

        out = abs(image1 - image2)

    :rtype: :py:class:`~PIL.Image.Image`
    subtractchop_screenduplicateLogical XOR between two images.

    .. code-block:: python

        out = ((bool(image1) != bool(image2)) % MAX)

    :rtype: :py:class:`~PIL.Image.Image`
    C:\Program Files\Python36\lib\site-packages\PIL\ImageChops.pyLogical AND between two images.

    .. code-block:: python

        out = ((image1 and image2) % MAX)

    :rtype: :py:class:`~PIL.Image.Image`
    Logical OR between two images.

    .. code-block:: python

        out = ((image1 or image2) % MAX)

    :rtype: :py:class:`~PIL.Image.Image`
    Fill a channel with a given grey level.

    :rtype: :py:class:`~PIL.Image.Image`
    <module PIL.ImageChops>Create composite using transparency mask. Alias for
    :py:meth:`PIL.Image.Image.composite`.

    :rtype: :py:class:`~PIL.Image.Image`
    
    Compares the two images, pixel by pixel, and returns a new image
    containing the darker values.

    .. code-block:: python

        out = min(image1, image2)

    :rtype: :py:class:`~PIL.Image.Image`
    add_modulo
    Superimposes two images on top of each other.

    If you multiply an image with a solid black image, the result is black. If
    you multiply with a solid white image, the image is unaffected.

    .. code-block:: python

        out = image1 * image2 / MAX

    :rtype: :py:class:`~PIL.Image.Image`
    Copy a channel. Alias for :py:meth:`PIL.Image.Image.copy`.

    :rtype: :py:class:`~PIL.Image.Image`
    chop_darkerchop_differencelogical_orlogical_and
    Invert an image (channel).

    .. code-block:: python

        out = MAX - image

    :rtype: :py:class:`~PIL.Image.Image`
    chop_andchop_xorchop_add_modulochop_orchop_subtract_modulolighter
    Compares the two images, pixel by pixel, and returns a new image containing
    the lighter values.

    .. code-block:: python

        out = max(image1, image2)

    :rtype: :py:class:`~PIL.Image.Image`
    
    Adds two images, dividing the result by scale and adding the
    offset. If omitted, scale defaults to 1.0, and offset to 0.0.

    .. code-block:: python

        out = ((image1 + image2) / scale + offset)

    :rtype: :py:class:`~PIL.Image.Image`
    Subtract two images, without clipping the result.

    .. code-block:: python

        out = ((image1 - image2) % MAX)

    :rtype: :py:class:`~PIL.Image.Image`
    chop_lighterrgba\(\s*(\d+)\s*,\s*(\d+)\s*,\s*(\d+)\s*,\s*(\d+)\s*\)$
     Convert a color string to an RGB tuple. If the string cannot be parsed,
     this function raises a :py:exc:`ValueError` exception.

    .. versionadded:: 1.1.4

    :param color: A color string
    :return: ``(red, green, blue[, alpha])``
    #[a-f0-9]{3}$�z	alicebluez#f0f8ffzantiquewhitez#faebd7zaquaz#00ffffz
aquamarinez#7fffd4zazurez#f0ffffzbeigez#f5f5dczbisquez#ffe4c4zblackz#000000zblanchedalmondz#ffebcdzbluez#0000ffz
bluevioletz#8a2be2zbrownz#a52a2az	burlywoodz#deb887z	cadetbluez#5f9ea0z
chartreusez#7fff00z	chocolatez#d2691ezcoralz#ff7f50zcornflowerbluez#6495edzcornsilkz#fff8dczcrimsonz#dc143czcyanz#00ffffzdarkbluez#00008bzdarkcyanz#008b8bzdarkgoldenrodz#b8860bzdarkgrayz#a9a9a9zdarkgreyz#a9a9a9z	darkgreenz#006400z	darkkhakiz#bdb76bzdarkmagentaz#8b008bzdarkolivegreenz#556b2fz
darkorangez#ff8c00z
darkorchidz#9932cczdarkredz#8b0000z
darksalmonz#e9967azdarkseagreenz#8fbc8fzdarkslatebluez#483d8bzdarkslategrayz#2f4f4fzdarkslategreyz#2f4f4fzdarkturquoisez#00ced1z
darkvioletz#9400d3zdeeppinkz#ff1493zdeepskybluez#00bfffzdimgrayz#696969zdimgreyz#696969z
dodgerbluez#1e90ffz	firebrickz#b22222zfloralwhitez#fffaf0zforestgreenz#228b22zfuchsiaz#ff00ffz	gainsboroz#dcdcdcz
ghostwhitez#f8f8ffzgoldz#ffd700z	goldenrodz#daa520zgrayz#808080zgreyz#808080zgreenz#008000zgreenyellowz#adff2fzhoneydewz#f0fff0zhotpinkz#ff69b4z	indianredz#cd5c5czindigoz#4b0082zivoryz#fffff0zkhakiz#f0e68czlavenderz#e6e6fazlavenderblushz#fff0f5z	lawngreenz#7cfc00zlemonchiffonz#fffacdz	lightbluez#add8e6z
lightcoralz#f08080z	lightcyanz#e0ffffzlightgoldenrodyellowz#fafad2z
lightgreenz#90ee90z	lightgrayz#d3d3d3z	lightgreyz#d3d3d3z	lightpinkz#ffb6c1zlightsalmonz#ffa07azlightseagreenz#20b2aazlightskybluez#87cefazlightslategrayz#778899zlightslategreyz#778899zlightsteelbluez#b0c4dezlightyellowz#ffffe0zlimez#00ff00z	limegreenz#32cd32zlinenz#faf0e6zmagentaz#ff00ffzmaroonz#800000zmediumaquamarinez#66cdaaz
mediumbluez#0000cdzmediumorchidz#ba55d3zmediumpurplez#9370dbzmediumseagreenz#3cb371zmediumslatebluez#7b68eezmediumspringgreenz#00fa9azmediumturquoisez#48d1cczmediumvioletredz#c71585zmidnightbluez#191970z	mintcreamz#f5fffaz	mistyrosez#ffe4e1zmoccasinz#ffe4b5znavajowhitez#ffdeadznavyz#000080zoldlacez#fdf5e6zolivez#808000z	olivedrabz#6b8e23zorangez#ffa500z	orangeredz#ff4500zorchidz#da70d6zpalegoldenrodz#eee8aaz	palegreenz#98fb98zpaleturquoisez#afeeeezpalevioletredz#db7093z
papayawhipz#ffefd5z	peachpuffz#ffdab9zperuz#cd853fzpinkz#ffc0cbzplumz#dda0ddz
powderbluez#b0e0e6zpurplez#800080zrebeccapurplez#663399zredz#ff0000z	rosybrownz#bc8f8fz	royalbluez#4169e1zsaddlebrownz#8b4513zsalmonz#fa8072z
sandybrownz#f4a460zseagreenz#2e8b57zseashellz#fff5eezsiennaz#a0522dzsilverz#c0c0c0zskybluez#87ceebz	slatebluez#6a5acdz	slategrayz#708090z	slategreyz#708090zsnowz#fffafazspringgreenz#00ff7fz	steelbluez#4682b4ztanz#d2b48cztealz#008080zthistlez#d8bfd8ztomatoz#ff6347z	turquoisez#40e0d0zvioletz#ee82eezwheatz#f5deb3zwhitez#ffffffz
whitesmokez#f5f5f5zyellowz#ffff00zyellowgreenz#9acd320colorsysrgb\(\s*(\d+)%\s*,\s*(\d+)%\s*,\s*(\d+)%\s*\)$C:\Program Files\Python36\lib\site-packages\PIL\ImageColor.pyhls_to_rgb<module PIL.ImageColor>
    Same as :py:func:`~PIL.ImageColor.getrgb`, but converts the RGB value to a
    greyscale value if the mode is not color or a palette image. If the string
    cannot be parsed, this function raises a :py:exc:`ValueError` exception.

    .. versionadded:: 1.1.4

    :param color: A color string
    :return: ``(graylevel [, alpha]) or (red, green, blue[, alpha])``
    colormap#[a-f0-9]{4}$#[a-f0-9]{8}$      Y@#[a-f0-9]{6}$hsl\(\s*(\d+)\s*,\s*(\d+)%\s*,\s*(\d+)%\s*\)$rgb\(\s*(\d+)\s*,\s*(\d+)\s*,\s*(\d+)\s*\)$Parser.__enter__ImageFile.__init__unknown errormmapencode_to_pyfdC:\Program Files\Python36\lib\site-packages\PIL\ImageFile.pyout of memory errorPyCodecStatesetfdmessagetile_prefiximage buffer overrun errordecoding errorbad configurationImageFile.load_preparecleanupImageFile.draftSet draft modePyDecoder.setimage(Hook) Find actual image loader.cannot reuse parsersImageFile.verifyPIL.ImageFileStubImageFile._loadParser.resetdecodermaxblockpulls_fdStubImageFile._open_tilesortreadimageskipHelper to save image based on tile list

    :param im: Image object.
    :param fp: File object.
    :param tile: Tile list.
    :param bufsize: Optional buffer size
    attempt to seek outside sequencepushes_fdLoad image data based on tile listStubImageFile subclass must implement _openImageFile._seek_checkraise_ioerror
        Called from ImageFile to set the python file-like object

        :param fd: A python file-like object
        :returns: None
        PyDecoder.pulls_fd when reading image filefhERRORS
        Override to perform decoder specific cleanup

        :returns: None
        Parser.__exit__PyDecoder.init��self�pixel�use_mmap�readonly�read�seek�decoder_name�extents�offset�args�mmap�fp�size�err_code�prefix�decoder�status�b�s�nStubImageFile.loadTile cannot extend outside image
    Reads large blocks in a safe way.  Unlike fp.read(n), this function
    doesn't trust the user.  If the requested size is larger than
    SAFEBLOCK, the file is read block by block.

    :param fp: File handle.  Must implement a <b>read</b> method.
    :param size: Number of bytes to read.
    :returns: A string containing up to <i>size</i> bytes of data.
    
    Base class for stub image loaders.

    A stub loader is an image loader that can identify files of a
    certain format, but relies on external code to load the file.
    ACCESS_READgetcodecstatus
        Override to perform decoder specific initialization

        :param args: Array of args items from the tile entry
        :returns: None
        <module PIL.ImageFile>PyCodecState.extentsBase class for image file format handlers.
        (Consumer) Feed data to the parser.

        :param data: A string buffer.
        :exception IOError: If the parser failed to parse the image file.
        
        Convenience method to set the internal image from a stream of raw data

        :param data: Bytes to be set
        :param rawmode: The rawmode to be used for the decoder. If not specified,
             it will default to the mode of the image
        :returns: None
        Check file integrityPyDecoder.cleanupdecoder error %dcannot find loader for this %s fileimage file is truncatedParser.feed_pulls_fdcannot parse this image
        (Consumer) Reset the parser.  Note that you can only call this
        method immediately after you've created a parser; parser
        instances cannot be reused.
        image was incompleteincrementalimage file is truncated (%d bytes not processed)not identified by this driverStubImageFile subclass must implement _loadPyDecoder.setfdPyCodecState.__init__
    Python implementation of a format decoder. Override this class and
    add the decoding logic in the `decode` method.

    See :ref:`Writing Your Own File Decoder in Python<file-decoders-py>`
    
        Override to perform the decoding process.

        :param buffer: A bytes object with the data to be decoded.  If `handles_eof`
             is set, then `buffer` will be empty and `self.fd` will be set.
        :returns: A tuple of (bytes consumed, errcode). If finished with decoding
             return <0 for the bytes consumed. Err codes are from `ERRORS`
        
    Incremental image parser.  This class implements the standard
    feed/close consumer interface.
    
        Called from ImageFile to set the core output image for the decoder

        :param im: A core image object
        :param extents: a 4 tuple of (x0, y0, x1, y1) defining the rectangle
            for this tile
        :returns: None
        getsizeset_as_rawParser.closeencode_to_fileSize cannot be negativePyDecoder.decodePyDecoder.__init__PyDecoder.set_as_raw_min_frame
        (Consumer) Close the stream.

        :returns: An image object.
        :exception IOError: If the parser failed to parse the image file either
                            because it cannot be identified or cannot be
                            decoded.
        Smooth MorefilterargsFIND_EDGESEdge-enhance�)�   r   �d   �    )�   r   r   r   r   r   r   r   r   r   r   r   �,   r   r   r   r   r   r   r   r   r   r   r   r   Find Edgescannot filter palette imagesMinFilter.__init__BuiltinFilter.__init__Blurs the image by setting each pixel to the average value of the pixels
    in a square box extending radius pixels in each direction.
    Supports float radius of arbitrary size. Uses an optimized implementation
    which runs in linear time relative to the size of the image
    for any radius value.

    :param radius: Size of the box in one direction. Radius 0 does not blur,
                   returns an identical image. Radius 1 takes 1 pixel
                   in each direction, i.e. 9 pixels in total.
    ModeFilter.__init__EMBOSSUnsharpMask.__init__ModeFilter.filter�)�   r   �   �    )�   r   r   r   r   r   r   r   r   r   r   r   r   r   r   r   r   r   r   r   r   r   r   r   r   EmbossContourrankfilterGaussian blur filter.

    :param radius: Blur radius.
    not enough coefficients in kernel

    Create a mode filter. Picks the most frequent pixel value in a box with the
    given size.  Pixel values that occur only once or twice are ignored; if no
    pixel value occurs more than twice, the original pixel value is preserved.

    :param size: The kernel size, in pixels.
    Kernel.filterunsharp_maskEDGE_ENHANCEBLURMaxFilter.__init__DETAIL
    Create a rank filter.  The rank filter sorts all pixels in
    a window of the given size, and returns the **rank**'th value.

    :param size: The kernel size, in pixels.
    :param rank: What pixel value to pick.  Use 0 for a min filter,
                 ``size * size / 2`` for a median filter, ``size * size - 1``
                 for a max filter, etc.
    MedianFilterpercentKernel.__init__.<locals>.<lambda>
    Create a median filter. Picks the median pixel value in a window with the
    given size.

    :param size: The kernel size, in pixels.
    gaussian_blurUnsharpMask.filter<module PIL.ImageFilter>RankMedianFilter.__init__Edge-enhance MoreSMOOTH_MOREBoxBlur.filterRankFilterGaussianBlurmodefilter
    Create a min filter.  Picks the lowest pixel value in a window with the
    given size.

    :param size: The kernel size, in pixels.
    RankFilter.filterSHARPEN
    Create a convolution kernel.  The current version only
    supports 3x3 and 5x5 integer and floating point kernels.

    In the current version, kernels can only be applied to
    "L" and "RGB" images.

    :param size: Kernel size, given as (width, height). In the current
                    version, this must be (3,3) or (5,5).
    :param kernel: A sequence containing kernel weights.
    :param scale: Scale factor. If given, the result for each pixel is
                    divided by this value.  the default is the sum of the
                    kernel weights.
    :param offset: Offset. If given, this value is added to the result,
                    after it has been divided by the scale factor.
    functoolsSharpenGaussianBlur.filterbox_blurreduceGaussianBlur.__init__C:\Program Files\Python36\lib\site-packages\PIL\ImageFilter.pyEDGE_ENHANCE_MORE
    Create a max filter.  Picks the largest pixel value in a window with the
    given size.

    :param size: The kernel size, in pixels.
    RankFilter.__init__DetailUnsharp mask filter.

    See Wikipedia's entry on `digital unsharp masking`_ for an explanation of
    the parameters.

    :param radius: Blur Radius
    :param percent: Unsharp strength, in percent
    :param threshold: Threshold controls the minimum brightness change that
      will be sharpened

    .. _digital unsharp masking: https://en.wikipedia.org/wiki/Unsharp_masking#Digital_unsharp_masking

    CONTOURBoxBlur.__init__ModeDescriptorModeDescriptor.__init___modesWrapper for mode strings.<module PIL.ImageMode>Gets a mode descriptor for the given mode.ModeDescriptor.__str__C:\Program Files\Python36\lib\site-packages\PIL\ImageMode.pyC:\Program Files\Python36\lib\site-packages\PIL\ImagePalette.pymake_gamma_lutPIL.ImagePaletteImagePalette.tobytesImagePalette.__init__ImagePalette.getcolorwrong palette size�   �    �   �   �   �   �   �   �   �   �	   �
   �   �   �   �   �   �   �   �   �   �   �   �   �   �   �   �   �   �   �   �   �   �    �!   �"   �#   �$   �%   �&   �'   �(   �)   �*   �+   �,   �-   �.   �/   �0   �1   �2   �3   �4   �5   �6   �7   �8   �9   �:   �;   �<   �=   �>   �?   �@   �A   �B   �C   �D   �E   �F   �G   �H   �I   �J   �K   �L   �M   �N   �O   �P   �Q   �R   �S   �T   �U   �V   �W   �X   �Y   �Z   �[   �\   �]   �^   �_   �`   �a   �b   �c   �d   �e   �f   �g   �h   �i   �j   �k   �l   �m   �n   �o   �p   �q   �r   �s   �t   �u   �v   �w   �x   �y   �z   �{   �|   �}   �~   �   �   �   �   �   �   �   �   �   �   �   �   �   �   �   �   �   �   �   �   �   �   �   �   �   �   �   �   �   �   �   �   �   �   �   �   �   �   �   �   �   �   �   �   �   �   �   �   �   �   �   �   �   �   �   �   �   �   �   �   �   �   �   �   �   ��   ��   ��   ��   ��   ��   ��   ��   ��   ��   ��   ��   ��   ��   ��   ��   ��   ��   ��   ��   ��   ��   ��   ��   ��   ��   ��   ��   ��   ��   ��   ��   ��   ��   ��   ��   ��   ��   ��   ��   ��   ��   ��   ��   ��   ��   ��   ��   ��   ��   ��   ��   ��   ��   ��   ��   ��   ��   ��   ��   ��   ��   ��   ��   cannot load palette# Mode: %s
ImagePalette.copycannot allocate more than 256 colors# Palette
Convert palette to bytes.

        .. warning:: This method is experimental.
        paletteHandler;Lpalette contains raw palette datasepiaGiven an rgb tuple, allocate palette entry.

        .. warning:: This method is experimental.
        ImagePalette.saveSave palette to text file.

        .. warning:: This method is experimental.
             �o@make_linear_lutrandintImagePalette.getdata<module PIL.ImagePalette>
        Get palette contents in format suitable # for the low-level
        ``im.putpalette`` primitive.

        .. warning:: This method is experimental.
         	
 !"#$%&'()*+,-./0123456789:;<=>?@ABCDEFGHIJKLMNOPQRSTUVWXYZ[\]^_`abcdefghijklmnopqrstuvwxyz{|}~��������������������������������������������������������������������������������������������������������������������������������
    Color palette for palette mapped images

    :param mode: The mode to use for the Palette. See:
        :ref:`concept-modes`. Defaults to "RGB"
    :param palette: An optional palette. If given, it must be a bytearray,
        an array or a list of ints between 0-255 and of length ``size``
        times the number of colors in ``mode``. The list must be aligned
        by channel (All R values must be contiguous in the list before G
        and B values.) Defaults to 0 through 255 per channel.
    :param size: An optional palette size. If given, it cannot be equal to
        or greater than 256. Defaults to 0.
    #fff0c0bits_per_pixelbits_per_linefull_bytes_per_lineremaining_bits_per_lineextra_paddingnew_dataFormat_ARGB32im_dataPyQt5.QtCorehasAlphaChannelqRgba__dataReadWriteFormat_MonosetColorTablePySide.QtGui_toqclass_helper
    converts each scanline of data from 8 bit to 32 bit aligned
    unsupported image mode %r_ImageQt__dataalign8to32colortablePIL.ImageQtQBufferqt_versionPyQt5.QtGuifromImageFormat_RGB32C:\Program Files\Python36\lib\site-packages\PIL\ImageQt.py
    :param im: A PIL Image object, or a file name
    (given either as Python string or a PyQt string object)
    ImageQt.__init__
            An PIL image wrapper for Qt.  This is a subclass of PyQt's QImage
            class.

            :param im: A PIL Image object, or a file name (given either as Python
                string or a PyQt string object).
            toUtf8<module PIL.ImageQt>PySide.QtCorePyQt4.QtGuiQIODeviceFormat_Indexed8PyQt4.QtCore(Internal) Turns an RGB color into a Qt compatible color integer.__next__Iterator.__next__<module PIL.ImageSequence>Iterator.__getitem__Iterator.nextim must have seek methodIterator.__iter__
    This class implements an iterator object that can be used to loop
    over an image sequence.

    You can use the ``[]`` operator to access elements by index. This operator
    will raise an :py:exc:`IndexError` if you try to access a nonexistent
    frame.

    :param im: An image object.
    C:\Program Files\Python36\lib\site-packages\PIL\ImageSequence.pyIterator.__init__Return format name, or None to save as PGM/PPMWindowsViewer.get_command -name %s
    Display a given image.

    :param image: An image object.
    :param title: Optional title.  Not all viewers can display the title.
    :param \**options: Additional viewer options.
    :returns: True if a suitable viewer was found, false otherwise.
    Display given file<module PIL.ImageShow>show_imageget_command_exSave to temporary file, and return filenameEogViewerisfile(%s %s; rm -f %s)&pipesViewer.showXVViewerexecutabledirnamequoteeogget_format_viewersinsertX_OKshow_fileBase class for viewers.Viewer.show_imageC:\Program Files\Python36\lib\site-packages\PIL\ImageShow.py(%s %s; sleep 20; rm -f %s)&issubclassopen -a /Applications/Preview.appMacViewer.get_commandXVViewer.get_command_exViewer.show_fileDisplayViewersystemUnixViewer.show_fileViewer.save_imageDisplay given imageEogViewer.get_command_exshlexpathsepdarwinDisplayViewer.get_command_exViewer.get_formatwin32start "Pillow" /WAIT "%s" && ping -n 2 127.0.0.1 >NUL && del /f "%s"JPG11Extension 11progressiveApplication segment 7Restart 7RST0Restart 0Multi-Frame Image: (Multi-Angle)_getexif4:2:0DAC_save_cjpeg.jpg.jpesrc_dictEntryNo1Restart 3JPG6Extension 6RST5APP10SOF6RST2Restart 2mpentryJPG2progressionqtablesApplication segment 11Restart 5Application segment 10streamtypeconvert_dict_qtablesAPP%dInvalid quality settingImage appears to be a malformed MPO file, it will be interpreted as a base JPEG fileAPP5<module PIL.JpegImagePlugin>RST4Restart 4End of imageload_djpegRestart 6APP8_save.<locals>.validate_qtablesBaseline MP Primary ImageSpatial lossless DCT (AC)SOF3AttributeJPG13Extension 13JPG7Extension 7UndefinedLarge Thumbnail (VGA Equivalent)Large Thumbnail (Full HD Equivalent)Multi-Frame Image (Panorama)Multi-Frame Image: (Disparity)CMYK;IApplication segment 12RST3JPG3linesapplistDependentParentImageFlagcannot handle %d-layer imagesInvalid FilenameDifferential sequential DCTSOS_fixup_dictmarkerJPG8RST1Extension 8Start of imagehuffman_acunpack_fromExtension 10APP11jfif_unitjfif_densityadobe_transformApplication segment 9Progressive DCT�)�   r   r   r   r   r   �    )�   r   r   r   r   r   r   )r   r   r   r   r   r   r   0cannot write mode %s as JPEGRestart 1JPG00.6Extension 0Define restart intervalDNLsmoothReservedSOIApplication segment 2.jfifAPP14endiannesslabelsno marker foundExtension 12DRIJPG12rawmpentriesApplication segment 13EXPExpand reference component�@�    �   �   �   �   �   �   �   �   �   �   �   �   �   �   �*   �   �   �   �   �   �   �)   �+   �	   �   �   �   �   �(   �,   �5   �
   �   �   �    �'   �-   �4   �6   �   �   �!   �&   �.   �3   �7   �<   �   �"   �%   �/   �2   �8   �;   �=   �#   �$   �0   �1   �9   �:   �>   �?   APP13samplingsSOF1��SOF13Extension 2EntryNo2Extension 3Application segment 6cannot handle %d-bit layersExtended sequential DCT (AC)file_contentsStart of scanExtension 9APP2icclistRST7zigzag_index-outfilesubsamplingunsupported picture format in MPOMARKERJPG4JpegImageFile._getexifJPG5APP9DHPAPP74:4:4DQTJpegImageFile.load_djpegApplication segment 3jfif_versionJPG9SOF11JpegImageFile._openEOISOF15RST6SOF10.jpegmalformed MP Index (bad MP Entry)Extended Sequential DCTkeepbad quantization table marker_fixup_dict.<locals>._fixupNone or too many quantization tablesRepresentativeImageFlag4:1:1Application segment 0profileSOF9Differential spatialMPF ICC_PROFILE Application segment 5UnknownDefine arithmetic coding conditioningExtension 5flashpixmalformed MP Index (no number of images)Extension 4Define hierarchical progressionAPP15SOF14not a JPEG fileAPP3mpheaderJPEG (ISO 10918)SOF5JPG10mpentryattrApplication segment 8��im�fp�filename�rawmode�info�dpi�quality�subsampling�qtables�preset�validate_qtables�extra�icc_profile�ICC_OVERHEAD_LEN�MAX_BYTES_IN_MARKER�MAX_DATA_BYTES_IN_MARKER�markers�i�marker�size�progressive�optimize�bufsizeAPP12Invalid quantization tableDifferential spatial (AC)SOF0Application segment 4splitlinesJFIFFPXR SkipJpegImageFile._getmpjpeg_factoryhuffman_dcimage/jpegDependentChildImageFlagDifferential progressive DCT (AC)Baseline DCT4:2:2Cannot use 'keep' when original image is not a JPEGApplication segment 15JpegImageFile.draftget_samplingAPP4ImageDataFormatApplication segment 14DHTMPTypeCommentDefine quantization tableSOF2SOF7AdobemptypemapProgressive DCT (AC)C:\Program Files\Python36\lib\site-packages\PIL\JpegImagePlugin.pyAPP6JpegPresetsDifferential sequential DCT (AC){}LLLHHentrynumunpackedentryDefine number of linesDefine Huffman tableAPP0Exif malformed MP Index (unreadable directory)C:\Program Files\Python36\lib\site-packages\PIL\JpegPresets.py�zweb_low{zsubsampling�   zquantization[   [@   �   �   �   �'   �2   �.   �>   �D   r   �   �   �&   r   �5   �A   r	   r   r   �   r   r   r   r	   r	   r   r   r   r   r   r	   r	   r	   r   r   r   r   r	   r	   r	   r	   r   r   r   r	   r	   r	   r	   r	   r   r   r	   r	   r	   r	   r	   r	   r	   r	   r	   r	   r	   r	   r	   r	   [@   �   r   �    r   �6   r	   r	   r	   r   �   �   r   r   r	   r	   r	   r   r   r   �+   �B   r	   r	   r	   r   r   r   r   r	   r	   r	   r	   r   r   r   r	   r	   r	   r	   r	   r	   r	   r	   r	   r	   r	   r	   r	   r	   r	   r	   r	   r	   r	   r	   r	   r	   r	   r	   r	   r	   r	   r	   r	   0z
web_medium{zsubsamplingr   zquantization[   [@   r   �   r   r   r   �   r   �   r   �   r   �   r   r   r   r   r   r   �   r   r   �   �#   �/   r   r   r   r   r   �%   r   �@   r   r   r   r   r   �3   r!   r!   r   r   r   r    r"   r!   r!   r!   r   r   r   r   r!   r!   r!   r!   r   r   r   r!   r!   r!   r!   r!   [@   �   r   r#   r   r   r   r   �0   r   �   r
   r#   r   r   r   r   r#   r
   r   �   r   r   r   r   r   r#   r&   r   r   r   r   r!   r   r   r   r   r   r$   r!   r!   r   r   r   r   r$   �?   r!   r!   r   r   r   r   r!   r!   r!   r!   r$   r   r   r!   r!   r!   r!   r!   0zweb_high{zsubsampling�    zquantization[   [@   �   �   r*   r)   �	   r   r   r   r*   �   r,   r)   �   �
   r   r   r*   r,   r,   r)   r.   r   �   r%   r)   r)   r)   r   r   r   r%   r   r+   r-   r.   r   r   r   r   r   r   r.   r   r   r   r   r   r   r   r   r/   r%   r   r   r   r   r   r   r%   r   r   r   r   r   [@   �   r0   r   r   r   r   r   r   r0   r   r   r   r   r   r   r   r   r   r#   r   r   r   r   r   r   r   r   r   r   r   r   r   r   r   r   r   r   r   r   r   r   r   r   r   r   r   r   r   r   r   r   r   r   r   r   r   r   r   r   r   r   r   r   r   0zweb_very_high{zsubsamplingr(   zquantization[   [@   r   r   r   r   �   r*   r,   r)   r   r   r   r   r1   r*   r,   r)   r   r   r   r   r*   r,   r0   r+   r   r   r   r*   r,   r0   r+   r   r1   r1   r*   r,   r-   r.   r   r   r*   r*   r,   r0   r.   r   r   r   r,   r,   r0   r+   r   r   r   r   r)   r)   r+   r   r   r   r   r   [@   r1   r1   r,   r+   r   r   r   r   r1   r*   r)   r   r/   r   r   r   r,   r)   r+   r/   r   r   r   r   r+   r   r/   r   r   r   r   r   r   r/   r   r   r   r   r   r   r   r   r   r   r   r   r   r   r   r   r   r   r   r   r   r   r   r   r   r   r   r   r   r   0zweb_maximum{zsubsamplingr(   zquantization[   [@   �   r2   r2   r2   r2   r2   r2   r2   r2   r2   r2   r2   r2   r2   r2   r2   r2   r2   r2   r2   r2   r2   r2   r   r2   r2   r2   r2   r2   r2   r   r   r2   r2   r2   r2   r2   r   r   r1   r2   r2   r2   r2   r   r   r1   r1   r2   r2   r2   r   r   r1   r1   r1   r2   r2   r   r   r1   r1   r1   r1   [@   r2   r2   r2   r   r   r1   r1   r1   r2   r2   r2   r   r1   r1   r1   r1   r2   r2   r2   r1   r1   r1   r1   r1   r   r   r1   r1   r1   r1   r1   r1   r   r1   r1   r1   r1   r1   r1   r1   r1   r1   r1   r1   r1   r1   r1   r1   r1   r1   r1   r1   r1   r1   r1   r1   r1   r1   r1   r1   r1   r1   r1   r1   0zlow{zsubsamplingr   zquantization[   [@   r
   r/   r/   r   r   r   �"   r#   r/   r   r   r%   r   r   r   r   r/   r   r#   r   r   r   r   r   r   r%   r   r   r   r   r   r   r   r   r   r   r   r   r   r   r   r   r   r   r   r   r   r   r3   r   r   r   r   r   r   r   r#   r   r   r   r   r   r   r   [@   r   r%   r&   r   r   r   r#   r#   r%   r   r   r/   r/   r   r   r   r&   r   r/   r/   r   r   r   r   r   r/   r/   r   r   r   r   r   r   r/   r   r   r   r   r   r   r   r   r   r   r   r   r   r   r#   r   r   r   r   r   r   r   r#   r   r   r   r   r   r   r   0zmedium{zsubsamplingr   zquantization[   [@   r   r-   r-   r   r#   r   r   r#   r-   r+   r+   r   r   r%   r   r   r-   r+   r.   r   r%   r   r   r   r   r   r   r   r   r   r   r   r#   r   r%   r   r   r   r   r   r   r%   r   r   r   r   r   r   r   r   r   r   r   r   r   r   r#   r   r   r   r   r   r   r   [@   r   r   r   r   r   r   r#   r#   r   r/   r/   r/   r/   r   r   r   r   r/   r/   r/   r   r   r   r   r   r/   r/   r   r   r   r   r   r   r/   r   r   r   r   r   r   r   r   r   r   r   r   r   r   r#   r   r   r   r   r   r   r   r#   r   r   r   r   r   r   r   0zhigh{zsubsamplingr(   zquantization[   [@   r)   r*   r*   r)   r+   r   r   r   r*   r,   r,   r)   r-   r.   r   r   r*   r,   r,   r)   r.   r   r   r   r)   r)   r)   r   r   r   r   r   r+   r-   r.   r   r   r   r   r   r   r.   r   r   r   r   r   r   r   r   r   r   r   r   r   r   r   r   r   r   r   r   r   r   [@   r0   r0   r   r   r   r   r#   r#   r0   r   r   r/   r/   r   r   r   r   r   r/   r/   r   r   r   r   r   r/   r/   r   r   r   r   r   r   r/   r   r   r   r   r   r   r   r   r   r   r   r   r   r   r#   r   r   r   r   r   r   r   r#   r   r   r   r   r   r   r   0zmaximum{zsubsamplingr(   zquantization[   [@   r   r   r   r   r1   r*   r,   r)   r   r   r   r   r1   r*   r,   r)   r   r   r   r   r*   r,   r0   r+   r   r   r   r*   r,   r0   r+   r   r1   r1   r*   r,   r-   r.   r   r   r*   r*   r,   r0   r.   r   r   r   r,   r,   r0   r+   r   r   r   r   r)   r)   r+   r   r   r   r   r   [@   r1   r1   r,   r+   r   r   r   r   r1   r*   r)   r.   r/   r   r   r   r,   r)   r+   r/   r   r   r   r   r+   r.   r/   r   r   r   r   r   r   r/   r   r   r   r   r   r   r   r   r   r   r   r   r   r   r   r   r   r   r   r   r   r   r   r   r   r   r   r   r   r   00PIL.JpegPresets
JPEG quality settings equivalent to the Photoshop settings.

More presets can be added to the presets dict if needed.

Can be use when saving JPEG file.

To apply the preset, specify::

  quality="preset_name"

To apply only the quantization table::

  qtables="preset_name"

To apply only the subsampling setting::

  subsampling="preset_name"

Example::

  im.save("image_name.jpg", quality="web_high")


Subsampling
-----------

Subsampling is the practice of encoding images by implementing less resolution
for chroma information than for luma information.
(ref.: https://en.wikipedia.org/wiki/Chroma_subsampling)

Possible subsampling values are 0, 1 and 2 that correspond to 4:4:4, 4:2:2 and
4:2:0.

You can get the subsampling of a JPEG with the
`JpegImagePlugin.get_subsampling(im)` function.


Quantization tables
-------------------

They are values use by the DCT (Discrete cosine transform) to remove
*unnecessary* information from the image (the lossy part of the compression).
(ref.: https://en.wikipedia.org/wiki/Quantization_matrix#Quantization_matrices,
https://en.wikipedia.org/wiki/JPEG#Quantization)

You can get the quantization tables of a JPEG with::

  im.quantization

This will return a dict with a number of arrays. You can pass this dict
directly as the qtables argument when saving a JPEG.

The tables format between im.quantization and quantization in presets differ in
3 ways:

1. The base container of the preset is a list with sublists instead of dict.
   dict[0] -> list[0], dict[1] -> list[1], ...
2. Each table in a preset is a list instead of an array.
3. The zigzag order is remove in the preset (needed by libjpeg >= 6a).

You can convert the dict format to the preset format with the
`JpegImagePlugin.convert_dict_qtables(dict_qtables)` function.

Libjpeg ref.: https://web.archive.org/web/20120328125543/http://www.jpegcameras.com/libjpeg/libjpeg-3.html

MpoImageFile.tellC:\Program Files\Python36\lib\site-packages\PIL\MpoImagePlugin.pyMpoImageFile._openMPO (CIPA DC-007)MpoImageFile.seekMpoImageFile.n_framesmpinfo_MpoImageFile__fp_MpoImageFile__frameMpoImageFile.load_seekimage/mpoMpoImageFile.is_animatedPIL.MpoImagePlugin<module PIL.MpoImagePlugin>.mpo_MpoImageFile__mpoffsets_MpoImageFile__framecount<module PIL.PaletteFile>C:\Program Files\Python36\lib\site-packages\PIL\PaletteFile.pylangtktEXtcidgAMAPngStream.chunk_tRNSPngStream.chunk_sRGB��im�fp�filename�chunk�mode�colors�bits�rawmode�chunks�icc�name�data�info�chunks_multiple_allowed�cid�palette_byte_number�palette_bytes�transparency�alpha_bytes�alpha�red�green�blue�dpicrc1crc2pHYschunk_PLTE_safe_zlib_decompresschunk_IENDchunk_IDAT     j�@ChunkStream.pushgetpalettemode^�* �*$iTXtinternal: read more image data<module PIL.PngImagePlugin>MAX_TEXT_MEMORYim_modeRead checksum.  Used if the C module is not presentPngImageFile.verifycannot use transparency for this modeMAX_TEXT_CHUNKcompress_typeim_palettebroken PNG file (bad header checksum in %r)verify must be called directly after opencomp_method_idat.__init__sBITAppends a text chunk.

        :param key: latin-1 encodable text key name
        :param value: value for this key, text or an
           :py:class:`PIL.PngImagePlugin.iTXt` instance
        :param zip: compression flag

        PngInfo.__init__raw_vals
    PNG chunk container (for use with save(pnginfo=))

    getchunks.<locals>.collector.appendPortable network graphicschunk_gAMAchunk_cHRMPngImageFile.load_endbroken PNG file (chunk %s)dobjCall the appropriate chunk handleriCCP profile name %rChunkStream.__exit__Verify PNG fileDDATChunkStream.verifyendchunkcidsplaintext_OUTMODESPngImageFile._openread_bytesPngStream.check_text_memoryICC Profile  Appends an arbitrary chunk. Use with caution.

        :param cid: a byte string, 4 bytes long.
        :param data: a byte string of the encoded data

        _idat.writecannot write mode %s as PNGbKGDhISTchunk_IHDRPngStream.chunk_zTXtinternal: prepare to read PNG fileSTREAM %r %s %s>%dItruncated PNG filesPLTC:\Program Files\Python36\lib\site-packages\PIL\PngImagePlugin.pyim_sizecrc32\w\w\w\wdecompressobjinternal: finished reading image dataChunkStream.crc_skipchunklenadd_itxtUnknown compression method %s in zTXt chunkCompression method %siTXt.__new__PngStream.chunk_IHDR_MAGIC_PngImageFile__idatim_infoPngStream.chunk_cHRM.<locals>.<genexpr>PngStream.chunk_tEXtChunkStream.__init__queueToo much memory used in text chunks: %s>MAX_TEXT_MEMORYis_cidChunkStream.callputchunkchunk_iTXtPngStream.chunk_iCCP_simple_palette�PNG

im_rawmodeunknown filter categoryPngImageFile.load_prepare.pngUnknown compression method %s in iCCP chunknot a PNG fileim_tileadd_textPngStream.chunk_pHYs��1)r   s    zL;1)zL;1s    zL;2)zL;2s    zL;4)zL;4s    �L)r   s    zLA)zLAs   �I)zI;16Bs    zP;1)zP;1s   zP;2)zP;2s   zP;4)zP;4s   �P)r   s   zRGB)zRGBs   zRGBA)zRGBAs   0PngStream.chunk_iTXtim_textPngInfo.add_textDecompressed Data Too LargetIMEtkeyPngStream.chunk_IDATAppends an iTXt chunk.

        :param key: latin-1 encodable text key name
        :param value: value for this key
        :param lang: language code
        :param tkey: UTF-8 version of the key name
        :param zip: compression flag

        getchunks.<locals>.appendimage/pngReturn a list of PNG chunks representing this image.�
F%u�?ChunkStream.__enter__PngStream.chunk_PLTEChunkStream.closePngStream.__init__chromaticityPngInfo.add_itxt
        :param cls: the class to use when creating the instance
        :param text: value for this key
        :param lang: language code
        :param tkey: UTF-8 version of the key name
        Write a PNG chunk (including CRC field)%r %s %s (unknown)�)�   �    )�1r   )�   r   )�LzL;2)�   r   )r   zL;4)�   r   )r   r   )�   r   )�IzI;16B)r   r   )zRGBzRGB)r   r   )zRGBzRGB;16B)r   �   )�PzP;1)r   r
   )r   zP;2)r   r
   )r   zP;4)r   r
   )r   r   )r   r   )zLAzLA)r   r   )zRGBAzLA;16B)r   �   )zRGBAzRGBA)r   r   )zRGBAzRGBA;16B0PngStream.chunk_gAMAPngStream.chunk_IENDunconsumed_tail%s;%d
    Subclass of string to allow iTXt chunks to look like strings while
    keeping their extra information

    PngImageFile.load_readim_idatRead and verify checksumgetchunks.<locals>.collector.writebroken PNG file (incomplete checksum in %r)ChunkStream.readFetch a new chunk. Returns header information.65535
255
P0CMYK.ppmFile does not extend beyond magic numberPpmImageFile._open<module PIL.PpmImagePlugin>.pbmToo many colors for band: %s
%d %d
.pgmPpmImageFile._tokenExpected ASCII value, found binary 	
cannot write mode %s as PPMPbmplus image2147483648
0456y0.2PyPPyRGBAPyCMYKnot a PPM fileb_whitespaceC:\Program Files\Python36\lib\site-packages\PIL\PpmImagePlugin.pyExpected int, got > 9 digits_PyAccessI16_L.set_pixel_PyAccess32_3.set_pixelget_pixel_PyAccess32_3._post_init
struct Pixel_RGBA {
    unsigned char r,g,b,a;
};
struct Pixel_I16 {
    unsigned char l,r;
};

        Modifies the pixel at x,y. The color is given as a single
        numerical value for single band images, and a tuple for
        multi-band images

        :param xy: The pixel coordinate, given as (x, y).
        :param color: The pixel value.
        _PyAccessI16_L._post_init_PyAccessI32_Swap._post_init_PyAccessI32_N.get_pixelimage8 I;16 access, native bitendian without conversion  PA, LA, stored in first and last bytes of a 32 bit word  I;32L/B access, with byteswapping conversion _PyAccessI32_Swap.reverse_PyAccess32_2._post_init_PyAccessI16_B._post_init_PyAccessFunsafe_ptrsaccess_type_PyAccessI16_N.get_pixelPyAccess._post_init_PyAccessI32_N._post_init_PyAccessI16_B.set_pixelPyAccess Not Implemented: %sPyAccess.__getitem___PyAccessI16_N._post_initint **check_xy_PyAccessF.set_pixelstruct Pixel_I16 **C:\Program Files\Python36\lib\site-packages\PIL\PyAccess.py_PyAccessI16_B.get_pixel<module PIL.PyAccess>charsdefs_PyAccess8.set_pixel_PyAccessI16_L.get_pixel_PyAccessF._post_init_PyAccess32_2.set_pixel_PyAccess32_4._post_initAttempt to putpixel a read only image
        Returns the pixel at x,y. The pixel is returned as a single
        value for single band images or a tuple for multiple band
        images

        :param xy: The pixel coordinate, given as (x, y).
        :returns: a pixel value for single band images, a tuple of
          pixel values for multiband images.
         Signed Int32 access, native endian  32 bit float access PyAccess.__setitem__struct Pixel_RGBA **_PyAccessI32_Swap.get_pixel_PyAccess32_4.set_pixel_PyAccess32_3.get_pixel_PyAccess32_4.get_pixel I;16B access, with conversion unsigned short **castmode_map_PyAccessI32_Swap.set_pixelunsigned char **PyAccess.__init__image32_PyAccessI16_N.set_pixelpixel location out of range 1, L, P, 8 bit images stored as uint8 _PyAccess8.get_pixel I;16L access, with conversion _PyAccessF.get_pixelPyAccess.check_xy_PyAccess8._post_initfloat ** RGBA etc, all 4 bytes of a 32 bit word _PyAccessI32_N.set_pixel_PyAccess32_2.get_pixel RGB and friends, stored in the first three bytes of a 32 bit word L;4RJPEGTABLES__floor__AppendingTiffWriter.finalizeAppendingTiffWriter.__init__��   zraw�   z
tiff_ccitt�   zgroup3�   zgroup4�   ztiff_lzw�   z	tiff_jpeg�   zjpeg�   ztiff_adobe_deflatei�  ztiff_raw_16i�  zpackbitsi)�  ztiff_thunderscani��  ztiff_deflateit�  ztiff_sgilogiu�  ztiff_sgilog240Return the current frame numberSetup this image object based on current tagscurPos__trunc__fractionsy_resolutionAppendingTiffWriter.goToEnd1;IR__rfloordiv__AppendingTiffWriter.setupImageFileDirectory_v2.load_bytedon't have fileno or getvalue. just readingSaving using libtiff encoderAppendingTiffWriter.closeL;2IRTiffImageFile.seekCOMPRESSION_INFO__rpow__II* MM* II *MutableMappingRGBA;16Lidx_fmt_nameSelect a given frame as current imageI;16N_numeratorWRITE_LIBTIFF__abs__ImageFileDirectory_v2._setitem.<locals>.<genexpr>legacy_apiload_rationalformat key:fnimage/tiff__rmod__ImageFileDirectory_v2.load_stringcalcsizeSAMPLESPERPIXELTILEOFFSETS_tags_v1wrote only %u bytes but wanted 2have fileno, calling fileno version of the decoder._endianSEEK_CURIFDRational.__init__rewriteLastShortIIMMTag Location: %s - Data Location: %s__div__ImageFileDirectory_v2.__iter__fpfp__le__TiffImageFile.n_framesIFD_LEGACY_APIuse_load_libtiffL;IAppendingTiffWriter.__enter____contains__RGBX;16BwhenceImageFileDirectory_v2._register_writer.<locals>.decorator- unsupported data organizationTiffImageFile._seekI;32N__round__P;RImageFileDirectory_v2._pack_setupAppendingTiffWriter.skipIFDsROWSPERSTRIPSAMPLEFORMATTiffImageFile._load_libtiff__mod__Tiffinfo Keys: %sNot allowing setting of legacy apiPREFIXES Returns an
        :py:class:`~PIL.TiffImagePlugin.ImageFileDirectory_v2`
        instance with the same data as is contained in the original
        :py:class:`~PIL.TiffImagePlugin.ImageFileDirectory_v1`
        instance.

        :returns: :py:class:`~PIL.TiffImagePlugin.ImageFileDirectory_v2`

        ImageFileDirectory_v1.to_v2readLongSEEK_SETC:\Program Files\Python36\lib\site-packages\PIL\TiffImagePlugin.pyY_RESOLUTION__hash__Tag %s, Type: %s, Value: %s- pil mode:fieldType__rtruediv____ceil__newFrame__nonzero__denomexc_value__rdiv__P;2RL;RIFDoffsetL;IR_tags_v2
        :returns: dict of name|key: value

        Returns the complete tag dictionary, with named tags where possible.
        - photometric_interpretation:COMPRESSION_INFO_REVImageFileDirectory_v1.__init__RGBa;16LImageFileDirectory_v2.__len__rewriteLastLongartistrewriteLastShortToLongwrite_rationalWindows Media Photo files not yet supportedRGB;RIFDRational.__repr__TagsnumTagsImageFileDirectory_v2.<lambda>AppendingTiffWriter.rewriteLastShortTiffImageFile._openoffsetOfNewPageImageFileDirectory_v2._register_loadernot a TIFF file (header %r not valid)SEEK_ENDTiffImageFile.is_animated_register_basicL;4I*** Summary ***_tagdataTiffImageFile._decoderItems: %sImageFileDirectory_v2.legacy_apiRGB;LThis class represents the **legacy** interface to a TIFF tag directory.

    Exposes a dictionary interface of the tags in the directory::

        ifd = ImageFileDirectory_v1()
        ifd[key] = 'Some Data'
        ifd.tagtype[key] = 2
        print(ifd[key])
        ('Some Data',)

    Also contains a dictionary of tag types as read from the tiff image file,
    `~PIL.TiffImagePlugin.ImageFileDirectory_v1.tagtype`.

    Values are returned as a tuple.

    ..  deprecated:: 3.0.0
    ARTISTMetadata Warning, tag %s had too many entries: %s, expected 1ImageFileDirectory_v1.<lambda>__ge__ImageFileDirectory_v2._register_basictag: %s (%d) - type: %s (%d)PHOTOSHOP_CHUNKPossibly corrupt EXIF data.  Expecting to read %d bytes but only got %d. Skipping tag %s- value:__radd__AppendingTiffWriter.rewriteLastLongLoading tags, location: %swriteLongcopyright__pow__IIMM of new page doesn't match IIMM of first page_write_dispatchtag_v2__neg__IMAGEJ_META_DATAexc_typeFractionbasetypesCouldn't set the image1.3.5__gt____rmul__ImageFileDirectory_v2.load_undefinedstripoffsets1;RConverted items: %sTiffTagswrite_stringI;12COLORMAP__rsub__X_RESOLUTIONPLANAR_CONFIGURATIONwrite_undefinedRGBa;16BshortFmtwriteShortIMAGEDESCRIPTIONOPEN_INFO��im�fp�filename�rawmode�prefix�photo�format�bits�extra�ifd�compression�libtiff�info�key�name�dpi�lut�stride�_fp�	blocklist�atts�
legacy_ifd�tag�value�a�e�l�s�d�offsetAppendingTiffWriter.tellImageFileDirectory_v2.namedtiffinfo_TiffImageFile__nextwrote only %u bytes but wanted 4IFDRational.denominatorTiffImageFile._setupAppendingTiffWriter.writeLongP;4Rhave getvalue. just sending in a string from getvalueAdobe TIFFmax_denominatorImageFileDirectory_v1.__iter__HHLfixIFDTiffImageFile.loadImageFileDirectory_v1.__getitem__AppendingTiffWriter.fixIFDIFDRational.__hash__ImageFileDirectory_v2.__delitem__longFmtload_signed_rationalImageFileDirectory_v2.load_rational.<locals>.<genexpr>close_fp- size:DEBUGImageFileDirectory_v2.__str__This class represents a TIFF tag directory.  To speed things up, we
    don't decode tags unless they're asked for.

    Exposes a dictionary interface of the tags in the directory::

        ifd = ImageFileDirectory_v2()
        ifd[key] = 'Some Data'
        ifd.tagtype[key] = 2
        print(ifd[key])
        'Some Data'

    Individual values are returned as the strings or numbers, sequences are
    returned as tuples of the values.

    The tiff metadata type of each item is stored in a dictionary of
    tag types in
    `~PIL.TiffImagePlugin.ImageFileDirectory_v2.tagtype`. The types
    are read from a tiff file, guessed from the type added, or added
    manually.

    Data Structures:

        * self.tagtype = {}

          * Key: numerical tiff tag number
          * Value: integer corresponding to the data type from `~PIL.TiffTags.TYPES`

    .. versionadded:: 3.0.0
    AppendingTiffWriter.readShortSTRIPOFFSETSunknown pixel mode__floordiv__RGB;16L.tiff<module PIL.TiffImagePlugin>__pos__totalSizeIMAGELENGTHtracebackL;2RAppendingTiffWriter.rewriteLastShortToLongSeeking to frame %s, on frame %s, __next %s, location: %sdivisionbeginningImageFileDirectory_v1.__setitem__IFDRational.numerator*** TiffImageFile._open ***RGBX;16L__sub__delegateRESOLUTION_UNITdate_timeXMPtagnametypnameunit_sizeHHL4sAppendingTiffWriter.setEndianSetup decoder contextsICCPROFILESTRIPBYTECOUNTSifhImageFileDirectory_v2.write_string_TiffImageFile__frameImageFileDirectory_v2._unpackljustwrite_signed_rational- compression:FILLORDERbytesWrittenTiffImageFile.tellImageFileDirectory_v2.named.<locals>.<genexpr>      �__lt__Corrupt EXIF data.  AppendingTiffWriter.readLong_save.<locals>.<genexpr>ImageFileDirectory_v2._ensure_readImageFileDirectory_v2.write_signed_rational.<locals>.<genexpr>ImageFileDirectory_v2.write_rational.<locals>.<genexpr>II*     - fill_order:_load_dispatchfieldSizeisShort- ifh: multistrip support not yet implementedsave: %s (%d) - type: %s (%d)whereToWriteNewIFDOffsetlimit_denominator__truediv__max_valAppendingTiffWriter.newFramecur_idxImageFileDirectory_v2._register_basic.<locals>.<lambda>.<locals>.<genexpr>- value: <table: %d bytes>_limit_rationalInitialize an ImageFileDirectory.

        To construct an ImageFileDirectory from a real file, pass the 8-byte
        magic header to the constructor.  To only set the endianness, pass it
        as the 'prefix' keyword argument.

        :param ifh: One of the accepted magic headers (cf. PREFIXES); also sets
              endianness.
        :param prefix: Override the endianness of the file.
        not a TIFF IFDoffset is neither short nor longL;4IR- __first:ImageFileDirectory_v2.save Implements a rational class where 0/0 is a legal value to match
    the in the wild use of exif rationals.

    e.g., DigitalZoomRatio - 0.00/0.00  indicates that no digital zoom was used
    SAVE_INFOfieldSizesImageFileDirectory_v2.load_rational.<locals>.combinetiles: - unsupported formatCOPYRIGHTIMAGEJ_META_DATA_BYTE_COUNTSisFirst

        :param max_denominator: Integer, the maximum denominator value
        :returns: Tuple of (numerator, denominator)
        ImageFileDirectory_v2.load_signed_rational.<locals>.combinepadBytessoftware_TiffImageFile__fpImageFileDirectory_v2.__setitem__ImageFileDirectory_v2.write_undefined_frame_pos- unsupported typeEXTRASAMPLESImageFileDirectory_v2.reset
        :param value: either an integer numerator, a
        float/rational/other number, or an IFDRational
        :param denominator: Optional integer denominator
        nfr{}lIFDRational._delegateImageFileDirectory_v2.__contains__TiffImageFile.load_endisLocal�   )�   �Hzshort)�   �Lzlong)�   �bzsigned byte)�   �hzsigned short)�	   �lzsigned long)�   �fzfloat)�   �dzdoubleIPTC_NAA_CHUNKAppendingTiffWriter.__exit__unknown data organizationAppendingTiffWriter.writeShortisLongIFDRational.__eq__ Overload method triggered when we detect a compressed tiff
            Calls out to libtiff READ_LIBTIFFBITSPERSAMPLEIFDRational.limit_rational- raw mode:��self�photo�	fillorder�xsize�ysize�sampleFormat�	bps_tuple�extra_tuple�	bps_count�key�rawmode�xres�yres�resunit�x�y�l�offsets�h�w�a�i�offset�o�palettePHOTOMETRIC_INTERPRETATIONfrom_v2cannot write mode %s as TIFFInvalid TIFF file header- planar_configuration:tagFormatwrite_byte{}{}P;1RIFDRational._delegate.<locals>.delegateIMAGEWIDTHImageFileDirectory_v2.write_byte Returns an
        :py:class:`~PIL.TiffImagePlugin.ImageFileDirectory_v1`
        instance with the same data as is contained in the original
        :py:class:`~PIL.TiffImagePlugin.ImageFileDirectory_v2`
        instance.

        :returns: :py:class:`~PIL.TiffImagePlugin.ImageFileDirectory_v1`

        AppendingTiffWriter.fixOffsets_planar_configurationDATE_TIME_compressionImageFileDirectory_v2._register_loader.<locals>.decoratorImageFileDirectory_v2.__init__r+bImageFileDirectory_v2.load_signed_rational.<locals>.<genexpr>ImageFileDirectory_v1.__len___legacy_api_TiffImageFile__firstOpen the first image in a TIFF fileAppendingTiffWriter.seek_debug_multipageImageFileDirectory_v1.__contains__ImageFileDirectory_v1.from_v2SOFTWAREImageFileDirectory_v2.__getitem__EXIFIFDPREDICTORNot exactly one tileno more images in TIFF fileTagInfo.cvt_enumLONG_TagInfovalue name type length enum�'   �   �  �  �  �  �  �
  �  �  �  �  �  �  �  �  �  �  �  �  �  �  �(  �)  �-  �@  �A  �B  �C  �J  �M  �R  �S  �T  �U  ��  ��  ��  ��  ��   �i[  z
JPEGTablesi�  zXMPi��  zWang Annotationi��  zExposureTimei��  zFNumberi��  z
MD FileTagi��  zMD ScalePixeli��  zMD ColorTablei��  z
MD LabNamei��  zMD SampleInfoi��  zMD PrepDatei��  zMD PrepTimei��  zMD FileUnitsi�  zModelPixelScaleTagi��  zIptcNaaInfoi~�  zINGR Packet Data Tagi�  zINGR Flag Registersi��  zIrasB Transformation Matrixi��  zModelTiepointTagi؅  zModelTransformationTagiI�  zPhotoshopInfoi��  zGeoKeyDirectoryTagi��  zGeoDoubleParamsTagi��  zGeoAsciiParamsTagi"�  zExposureProgrami$�  zSpectralSensitivityi'�  zISOSpeedRatingsi(�  zOECFi0�  zSensitivityTypei1�  zStandardOutputSensitivityi2�  zRecommendedExposureIndexi3�  zISOSpeedi4�  zISOSpeedLatitudeyyyi5�  zISOSpeedLatitudezzzi\�  zHylaFAX FaxRecvParamsi]�  zHylaFAX FaxSubAddressi^�  zHylaFAX FaxRecvTimei �  zExifVersioni�  zDateTimeOriginali�  zDateTImeDigitizedi�  zComponentsConfigurationi�  zCompressedBitsPerPixeli\�  zImageSourceDatai�  zShutterSpeedValuei�  zApertureValuei�  zBrightnessValuei�  zExposureBiasValuei�  zMaxApertureValuei�  zSubjectDistancei�  zMeteringModei�  zLightSourcei	�  zFlashi
�  zFocalLengthi�  zSubjectAreai|�  z	MakerNotei��  zUserCommenti��  zSubSeci��  zSubSecTimeOriginali��  zSubsecTimeDigitizedi �  zFlashPixVersioni�  z
ColorSpacei�  zPixelXDimensioni�  zPixelYDimensioni�  zRelatedSoundFilei�  zInteroperabilityIFDi�  zFlashEnergyi�  zSpatialFrequencyResponsei�  zFocalPlaneXResolutioni�  zFocalPlaneYResolutioni�  zFocalPlaneResolutionUniti�  zSubjectLocationi�  zExposureIndexi�  zSensingMethodi �  z
FileSourcei�  z	SceneTypei�  z
CFAPatterni�  zCustomRenderedi�  zExposureModei�  zWhiteBalancei�  zDigitalZoomRatioi�  zFocalLengthIn35mmFilmi�  zSceneCaptureTypei�  zGainControli�  zContrasti	�  z
Saturationi
�  z	Sharpnessi�  zDeviceSettingDescriptioni�  zSubjectDistanceRangei �  zImageUniqueIDi0�  zCameraOwnerNamei1�  zBodySerialNumberi2�  zLensSpecificationi3�  zLensMakei4�  z	LensModeli5�  zLensSerialNumberi��  zGDAL_METADATAi��  zGDAL_NODATAi �  zGammai'�  zOce Scanjob Descriptioni(�  zOce Application Selectori)�  zOce Identification Numberi*�  zOce ImageLogic Characteristicsi�  z
DNGVersioni�  zDNGBackwardVersioni�  zUniqueCameraModeli�  zLocalizedCameraModeli�  zCFAPlaneColori�  z	CFALayouti�  zLinearizationTablei�  zBlackLevelRepeatDimi�  z
BlackLeveli�  zBlackLevelDeltaHi�  zBlackLevelDeltaVi�  z
WhiteLeveli�  zDefaultScalei�  zDefaultCropOrigini �  zDefaultCropSizei!�  zColorMatrix1i"�  zColorMatrix2i#�  zCameraCalibration1i$�  zCameraCalibration2i%�  zReductionMatrix1i&�  zReductionMatrix2i'�  zAnalogBalancei(�  zAsShotNeutrali)�  zAsShotWhiteXYi*�  zBaselineExposurei+�  zBaselineNoisei,�  zBaselineSharpnessi-�  zBayerGreenSpliti.�  zLinearResponseLimiti/�  zCameraSerialNumberi0�  zLensInfoi1�  zChromaBlurRadiusi2�  zAntiAliasStrengthi4�  zDNGPrivateDataiZ�  zCalibrationIlluminant1i[�  zCalibrationIlluminant2i`�  zAlias Layer Metadata0
    :param tag: Integer tag number
    :returns: Taginfo namedtuple, From the TAGS_V2 info if possible,
        otherwise just populating the value and name from TAGS.
        If the tag is not recognized, "unknown" is returned for the name

    C:\Program Files\Python36\lib\site-packages\PIL\TiffTags.pyUNDEFINEDsvRATIONAL_populateSHORT���   )zNewSubfileType�   �   ��   )zSubfileType�   r   �   )z
ImageWidthr   r   i  )zImageLengthr   r   i  )zBitsPerSampler   �    i  )zCompressionr   r   {zUncompressedr   zCCITT 1d�   zGroup 3 Faxr   zGroup 4 Faxr   zLZW�   zJPEG�   zPackBitsi�  0i  )zPhotometricInterpretationr   r   {zWhiteIsZeror   zBlackIsZeror   zRGBr   zRGB Paletter   zTransparency Maskr   zCMYKr	   zYCbCrr
   zCieLAB�   zCFAi#�  z	LinearRawi|�  0i  )zThreshholdingr   r   i  )z	CellWidthr   r   i	  )z
CellLengthr   r   i
  )z	FillOrderr   r   i  )zDocumentNamer   r   i  )zImageDescriptionr   r   i  )zMaker   r   i  )zModelr   r   i  )zStripOffsetsr   r   i  )zOrientationr   r   i  )zSamplesPerPixelr   r   i  )zRowsPerStripr   r   i  )zStripByteCountsr   r   i  )zMinSampleValuer   r   i  )zMaxSampleValuer   r   i  )zXResolutionr	   r   i  )zYResolutionr	   r   i  )zPlanarConfigurationr   r   {z
Contiguousr   zSeparater   0i  )zPageNamer   r   i  )z	XPositionr	   r   i  )z	YPositionr	   r   i   )zFreeOffsetsr   r   i!  )zFreeByteCountsr   r   i"  )zGrayResponseUnitr   r   i#  )zGrayResponseCurver   r   i$  )z	T4Optionsr   r   i%  )z	T6Optionsr   r   i(  )zResolutionUnitr   r   {znoner   zinchr   zcmr   0i)  )z
PageNumberr   r   i-  )zTransferFunctionr   r   i1  )zSoftwarer   r   i2  )zDateTimer   r   i;  )zArtistr   r   i<  )zHostComputerr   r   i=  )z	Predictorr   r   {znoner   zHorizontal Differencingr   0i>  )z
WhitePointr	   r   i?  )zPrimaryChromaticitiesr   r
   i@  )zColorMapr   r   iA  )zHalftoneHintsr   r   iB  )z	TileWidthr   r   iC  )z
TileLengthr   r   iD  )zTileOffsetsr   r   iE  )zTileByteCountsr   r   iL  )zInkSetr   r   iM  )zInkNamesr   r   iN  )zNumberOfInksr   r   iP  )zDotRanger   r   iQ  )zTargetPrinterr   r   iR  )zExtraSamplesr   r   iS  )zSampleFormatr   r   iT  )zSMinSampleValue�   r   iU  )zSMaxSampleValuer   r   iV  )zTransferRanger   r
   i[  )z
JPEGTables�   r   i   )zJPEGProcr   r   i  )zJPEGInterchangeFormatr   r   i  )zJPEGInterchangeFormatLengthr   r   i  )zJPEGRestartIntervalr   r   i  )zJPEGLosslessPredictorsr   r   i  )zJPEGPointTransformsr   r   i  )zJPEGQTablesr   r   i  )zJPEGDCTablesr   r   i	  )zJPEGACTablesr   r   i  )zYCbCrCoefficientsr	   r   i  )zYCbCrSubSamplingr   r   i  )zYCbCrPositioningr   r   i  )zReferenceBlackWhiter   r   i�  )zXMPr   r   i��  )z	Copyrightr   r   iI�  )zPhotoshopInfor   r   ii�  )zExifIFDr   r   is�  )z
ICCProfiler   r   i%�  )z
GPSInfoIFDr   r   i �  )z
MPFVersionr   r   i�  )zNumberOfImagesr   r   i�  )zMPEntryr   r   i�  )zImageUIDListr   r   i�  )zTotalFramesr   r   i�  )zMPIndividualNumr   r   i�  )zPanOrientationr   r   i�  )zPanOverlap_Hr	   r   i�  )zPanOverlap_Vr	   r   i�  )zBaseViewpointNumr   r   i�  )zConvergenceAngle�
   r   i�  )zBaselineLengthr	   r   i�  )zVerticalDivergencer   r   i�  )zAxisDistance_Xr   r   i	�  )zAxisDistance_Yr   r   i
�  )zAxisDistance_Zr   r   i�  )zYawAngler   r   i�  )z
PitchAngler   r   i�  )z	RollAngler   r   i5�  )zMakerNoteSafetyr   r   {zUnsafer   zSafer   0i\�  )zBestQualityScaler	   r   i��  )zImageJMetaDataByteCountsr   r   i��  )zImageJMetaDatar   r   0SIGNED_RATIONALDOUBLETagInfo.__new__<module PIL.TiffTags>si32lePIL._binary
    Converts a 2-bytes (16 bits) string to a signed integer.

    c: string containing bytes to convert
    o: offset of bytes to convert in string
    C:\Program Files\Python36\lib\site-packages\PIL\_binary.py
    Converts a 4-bytes (32 bits) string to an unsigned integer.

    c: string containing bytes to convert
    o: offset of bytes to convert in string
    <H<I
    Converts a 2-bytes (16 bits) string to an unsigned integer.

    c: string containing bytes to convert
    o: offset of bytes to convert in string
    <h<module PIL._binary>
    Converts a 4-bytes (32 bits) string to a signed integer.

    c: string containing bytes to convert
    o: offset of bytes to convert in string
    si16leisdirisDirectorydeferred_error.__init__PIL._utilC:\Program Files\Python36\lib\site-packages\PIL\_util.py<module PIL._util>deferred_error.__getattr__C:\Program Files\Python36\lib\site-packages\PIL\version.pyPIL.version5.0.0file {}/{} at category {}testpic_dir../../expected_valueC:\Users\yairi\PycharmProjects\BegginerNet\NetworkImplementations\mnist_network\mnist.pyStarted preprocessing__annotations__num_filesNonMatrixArtificialNeuralNetworktesting_dirpreprocess_dataprecentagecategoriesfile_dirtest_datalistdirsave_dirtraining_datatraining_dir./databatch_sizeC:\Users\yairi\Desktop\Mnist\trainingnormal_funcepochsget_pixels_for_pic<module>C:\Users\yairi\Desktop\Mnist\testingaccuracy=              �?      �?       @R���Q@     �v@i8o8msgo16cffijoinkeysmathasciichaindirtyflushi16bei32bemergeo16beo16leo32beo32lethrowisPathkwargslittleloggersetterstdoutunlinkVERSION__all____cmp____doc__globalsinspectloggingmkstempMAXBLOCK__dict____file____main____name____path____spec___pluginsbasemodeendswithfromlistreadlinesave_alltempfilewarnings_MAPMODES_MODEINFO__class____slots___n_frames_save_allbyteordergetLoggeritertoolsmetaclassDataOffset__cached____import____loader____module___safe_readbackgroundcheck_callfromqimagemap_bufferstartswithsubprocess__package____prepare____version___getdecoder_getencoderclassmethodcollectionsdescriptionfromqpixmapgetmodebaseLIBTIFF_CORE__builtins____internal____qualname___is_animatedisStringTypestaticmethodversion_infox_resolution__metaclass__append_imagesdecoderconfigencoderconfigregister_mimeregister_openregister_savePILLOW_VERSIONcompress_levelprint_function<dictcontraction><listcontraction>MultibandFilterqt_is_installedresolution_unitpypy_version_inforegister_save_allformat_descriptionregister_extensionregister_extensionsUnsupportedOperationLOAD_TRUNCATED_IMAGES_decompression_bomb_check0.9w+b>H%s argument after ** must be a mapping, not %s%s argument after * must be an iterable, not %sC:\Program Files\Python36\python.exeutf-8encoder error %d when writing image filebad palette filecannot load this imagenot enough image dataunknown color specifier: %rcannot decode image data%s got multiple values for keyword argument '%s'_close_exclusive_fp_after_loadingMM *   