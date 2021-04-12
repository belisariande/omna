<?xml version="1.0"?>
<!--=====================================================-->
<!-- stylesheet                                          -->
<!--=====================================================-->
<xsl:stylesheet 
 xmlns:xsl="http://www.w3.org/1999/XSL/Transform"
 version="1.0">

<xsl:output
 method="text"
 indent="no"/>

<!--=====================================================-->
<!-- param                                               -->
<!--=====================================================-->
<xsl:param name="default_xml_version" select="'1.0'"/>
<xsl:param name="form_xml_version" select="''"/>
<xsl:param name="xml_version">
    <xsl:choose>
        <xsl:when test="'' != $form_xml_version">
            <xsl:value-of select="$form_xml_version"/>
        </xsl:when>
        <xsl:otherwise>
            <xsl:value-of select="$default_xml_version"/>
        </xsl:otherwise>
    </xsl:choose>
</xsl:param>
<xsl:param name="default_xsl_version" select="'1.0'"/>
<xsl:param name="form_xsl_version" select="''"/>
<xsl:param name="xsl_version">
    <xsl:choose>
        <xsl:when test="'' != $form_xsl_version">
            <xsl:value-of select="$form_xsl_version"/>
        </xsl:when>
        <xsl:otherwise>
            <xsl:value-of select="$default_xsl_version"/>
        </xsl:otherwise>
    </xsl:choose>
</xsl:param>
<xsl:param name="default_xsl_ns" select="'xsl'"/>
<xsl:param name="form_xsl_ns" select="''"/>
<xsl:param name="xsl_ns">
    <xsl:choose>
        <xsl:when test="'' != $form_xsl_ns">
            <xsl:value-of select="$form_xsl_ns"/>
        </xsl:when>
        <xsl:otherwise>
            <xsl:value-of select="$default_xsl_ns"/>
        </xsl:otherwise>
    </xsl:choose>
</xsl:param>
<xsl:param name="default_xsl_ns_uri" select="'http://www.w3.org/1999/XSL/Transform'"/>
<xsl:param name="form_xsl_ns_uri" select="''"/>
<xsl:param name="xsl_ns_uri">
    <xsl:choose>
        <xsl:when test="'' != $form_xsl_ns_uri">
            <xsl:value-of select="$form_xsl_ns_uri"/>
        </xsl:when>
        <xsl:otherwise>
            <xsl:value-of select="$default_xsl_ns_uri"/>
        </xsl:otherwise>
    </xsl:choose>
</xsl:param>
<xsl:param name="default_xsl_document" select="'stylesheet'"/>
<xsl:param name="form_xsl_document" select="'stylesheet'"/>
<xsl:param name="xsl_document">
    <xsl:choose>
        <xsl:when test="'' != $form_xsl_document">
            <xsl:value-of select="$form_xsl_document"/>
        </xsl:when>
        <xsl:otherwise>
            <xsl:value-of select="$default_xsl_document"/>
        </xsl:otherwise>
    </xsl:choose>
</xsl:param>
<xsl:param name="default_xsl_output" select="'text'"/>
<xsl:param name="form_xsl_output" select="''"/>
<xsl:param name="xsl_output">
    <xsl:choose>
        <xsl:when test="'no' != $form_xsl_output">
            <xsl:value-of select="$form_xsl_output"/>
        </xsl:when>
        <xsl:otherwise>
            <xsl:value-of select="$default_xsl_output"/>
        </xsl:otherwise>
    </xsl:choose>
</xsl:param>
<xsl:param name="default_xsl_indent" select="'no'"/>
<xsl:param name="form_xsl_indent" select="''"/>
<xsl:param name="xsl_indent">
    <xsl:choose>
        <xsl:when test="'' != $form_xsl_indent">
            <xsl:value-of select="$form_xsl_indent"/>
        </xsl:when>
        <xsl:otherwise>
            <xsl:value-of select="$default_xsl_indent"/>
        </xsl:otherwise>
    </xsl:choose>
</xsl:param>
<xsl:param name="default_xsl_include" select="''"/>
<xsl:param name="form_xsl_include" select="''"/>
<xsl:param name="xsl_include">
    <xsl:choose>
        <xsl:when test="'' != $form_xsl_include">
            <xsl:value-of select="$form_xsl_include"/>
        </xsl:when>
        <xsl:otherwise>
            <xsl:value-of select="$default_xsl_include"/>
        </xsl:otherwise>
    </xsl:choose>
</xsl:param>
<xsl:param name="default_xsl_param" select="''"/>
<xsl:param name="form_xsl_param" select="$default_xsl_param"/>
<xsl:param name="xsl_param">
    <xsl:choose>
        <xsl:when test="'' != $form_xsl_param">
            <xsl:value-of select="$form_xsl_param"/>
        </xsl:when>
        <xsl:otherwise>
            <xsl:value-of select="$default_xsl_param"/>
        </xsl:otherwise>
    </xsl:choose>
</xsl:param>
<xsl:param name="xml_comment_eq" select="'====================================================='"/>
<xsl:param name="xml_comment_sp1" select="' '"/>
<xsl:param name="xml_comment_sp2" select="'          '"/>
<xsl:param name="xml_comment_sp3" select="'                                          '"/>
<xsl:param name="template_match" select="''"/>
<xsl:param name="template_name" select="''"/>
<xsl:param name="xalan_ns" select="'xalan'"/>
<xsl:param name="xalan_ns_uri" select="'http://xml.apache.org/xalan'"/>
<xsl:param name="xml_ns" select="''"/>
<xsl:param name="xml_ns_uri" select="$xml_ns"/>

<!--=====================================================-->
<!-- template                                            -->
<!--=====================================================-->
<xsl:template name="comment_header">
<xsl:param name="comment_type" select="''"/>
<xsl:param name="comment_sp1" select="$xml_comment_sp1"/>
<xsl:param name="comment_sp3" select="$xml_comment_sp3"/>
<xsl:param name="comment_sp2">
    <xsl:choose>
        <xsl:when test="'stylesheet' = $comment_type">
            <xsl:value-of select="'stylesheet'"/>
        </xsl:when>
        <xsl:when test="'output' = $comment_type">
            <xsl:value-of select="'output    '"/>
        </xsl:when>
        <xsl:when test="'include' = $comment_type">
            <xsl:value-of select="'include   '"/>
        </xsl:when>
        <xsl:when test="'param' = $comment_type">
            <xsl:value-of select="'param     '"/>
        </xsl:when>
        <xsl:when test="'variable' = $comment_type">
            <xsl:value-of select="'variable   '"/>
        </xsl:when>
        <xsl:when test="'template' = $comment_type">
            <xsl:value-of select="'template  '"/>
        </xsl:when>
        <xsl:otherwise>
            <xsl:value-of select="$xml_comment_sp2"/>
        </xsl:otherwise>
    </xsl:choose>
</xsl:param>
<xsl:param name="comment_sp">
    <xsl:value-of select="$comment_sp1"/>
    <xsl:value-of select="$comment_sp2"/>
    <xsl:value-of select="$comment_sp3"/>
</xsl:param>
<xsl:text/>&lt;!--<xsl:value-of select="$xml_comment_eq"/>--&gt;
&lt;!--<xsl:value-of select="$comment_sp"/>--&gt;
&lt;!--<xsl:value-of select="$xml_comment_eq"/>--&gt;
</xsl:template>

<!--=====================================================-->
<!-- template                                            -->
<!--=====================================================-->
<xsl:template name="xml_version"
>&lt;?xml version="<xsl:value-of select="$xml_version"/>"?&gt;
</xsl:template>

<!--=====================================================-->
<!-- template                                            -->
<!--=====================================================-->
<xsl:template name="xsl_begin"
>&lt;<xsl:value-of select="$xsl_ns"/>:<xsl:value-of select="$xsl_document"/>
 xmlns:<xsl:value-of select="$xsl_ns"/>="<xsl:value-of select="$xsl_ns_uri"/>"<xsl:if test="'' != $xalan_ns">
 xmlns:<xsl:value-of select="$xalan_ns"/>="<xsl:value-of select="$xalan_ns_uri"/>"</xsl:if><xsl:if test="'' != $xml_ns">
 xmlns:<xsl:value-of select="$xml_ns"/>="<xsl:value-of select="$xml_ns_uri"/>"</xsl:if>
 version="<xsl:value-of select="$xsl_version"/>"&gt;
</xsl:template>

<!--=====================================================-->
<!-- template                                            -->
<!--=====================================================-->
<xsl:template name="xsl_end"
>&lt;/<xsl:value-of select="$xsl_ns"/>:<xsl:value-of select="$xsl_document"/>&gt;
</xsl:template>

<!--=====================================================-->
<!-- template                                            -->
<!--=====================================================-->
<xsl:template name="xsl_output">
<xsl:if test="'' != $xsl_output">
<xsl:text>
</xsl:text>
    <xsl:call-template name="comment_header">
        <xsl:with-param name="comment_type" select="'output'"/>
    </xsl:call-template>
    <xsl:text/>&lt;<xsl:value-of select="$xsl_ns"/>:output
 method="<xsl:value-of select="$xsl_output"/>"
 indent="<xsl:value-of select="$xsl_indent"/>"/&gt;
</xsl:if>
</xsl:template>

<!--=====================================================-->
<!-- template                                            -->
<!--=====================================================-->
<xsl:template name="xsl_include">
<xsl:if test="'' != $xsl_include">
<xsl:text>
</xsl:text>
    <xsl:call-template name="comment_header">
        <xsl:with-param name="comment_type" select="'include'"/>
    </xsl:call-template>
    <xsl:text/>&lt;<xsl:value-of select="$xsl_ns"/>:include
 href="<xsl:value-of select="$xsl_include"/>"/&gt;
</xsl:if>
</xsl:template>

<!--=====================================================-->
<!-- template                                            -->
<!--=====================================================-->
<xsl:template name="xsl_param">
<xsl:if test="'' != $xsl_param">
<xsl:text>
</xsl:text>
    <xsl:call-template name="comment_header">
        <xsl:with-param name="comment_type" select="'param'"/>
    </xsl:call-template>
    <xsl:text/>&lt;<xsl:value-of select="$xsl_ns"/>:param
 name="<xsl:value-of select="$xsl_param"/>"
 select="'<xsl:value-of select="''"/>'"/&gt;
</xsl:if>
</xsl:template>

<!--=====================================================-->
<!-- template                                            -->
<!--=====================================================-->
<xsl:template name="template_name">
<xsl:param name="name" select="''"/>
<xsl:text>
</xsl:text>
<xsl:call-template name="comment_header">
    <xsl:with-param name="comment_type" select="'template'"/>
</xsl:call-template>
<xsl:text/>&lt;<xsl:value-of select="$xsl_ns"/>:template name="<xsl:value-of select="$name"/>"&gt;
&lt;/<xsl:value-of select="$xsl_ns"/>:template&gt;
</xsl:template>

<!--=====================================================-->
<!-- template                                            -->
<!--=====================================================-->
<xsl:template name="template_match">
    <xsl:param name="match" select="''"/>
<xsl:text>
</xsl:text>
    <xsl:call-template name="comment_header">
        <xsl:with-param name="comment_type" select="'template'"/>
    </xsl:call-template>
    <xsl:text/>&lt;<xsl:value-of select="$xsl_ns"/>:template match="<xsl:value-of select="$match"/>"&gt;
&lt;/<xsl:value-of select="$xsl_ns"/>:template&gt;
</xsl:template>

<!--=====================================================-->
<!-- template                                            -->
<!--=====================================================-->
<xsl:template match="*">
    <xsl:call-template name="xml_version"/>
    <xsl:call-template name="comment_header">
        <xsl:with-param name="comment_type" select="'stylesheet'"/>
    </xsl:call-template>
    <xsl:call-template name="xsl_begin"/>
    <xsl:call-template name="xsl_output"/>
    <xsl:call-template name="xsl_include"/>
    <xsl:call-template name="xsl_param"/>

    <xsl:if test="'' != $template_name">
        <xsl:call-template name="template_name">
            <xsl:with-param name="name" select="$template_name"/>
        </xsl:call-template>
    </xsl:if>

    <xsl:if test="'' != $template_match">
        <xsl:call-template name="template_match">
            <xsl:with-param name="match" select="$template_match"/>
        </xsl:call-template>
    </xsl:if>

    <xsl:call-template name="xsl_end"/>
</xsl:template>
</xsl:stylesheet>
